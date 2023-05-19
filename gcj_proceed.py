import os
import sys
import csv
import filecmp
import subprocess
from subprocess import Popen, PIPE
import time
import shutil
import wmi

C_correct_file_appendix = 'C.csv'
CPP_correct_file_appendix = 'CPP.csv'
Problem_file_appendix = 'problemInfo.csv'
file_prefix = 'gcj-dataset-master/gcj'
problem_file_prefix = 'gcj-dataset-master/questionInfo/'
problem_input_appendix = '/sample_test_set_1/sample_ts1_input.txt'
problem_output_appendix = '/sample_test_set_1/sample_ts1_output.txt'
temp_folder = 'tmp'


sudo_password = ''

csv.field_size_limit(2147483647)


def killProcess():
    wmiHandler = wmi.WMI()
    try:
        for process in wmiHandler.Win32_Process(name="prog.o"):
            process.Terminate()
    except:  # currently just use a general exception handler to handle this, may need a smarter solution later
        print('[D]Fail to terminate previous processes!')


def killProcessLinux():
    global sudo_password
    try:
        command = 'pkill chromedriver'.split()
        p = Popen(['sudo', '-S'] + command, stdin=PIPE, stderr=PIPE, universal_newlines=True)
        sudo_prompt = p.communicate(sudo_password + '\n')[1]
    except:
        print('[D]Fail to terminate previous processes!')


def checkYr(yr):
    try:
        yr = int(yr)
    except Exception():
        print('Exception: Year must be a number in range [2008, 2020]')
        exit(2)
    if 2008 <= yr <= 2020 and int(yr) == yr:
        return yr
    else:
        print('Exception: Year out of range [2008, 2020]')
        exit(2)


def singleProgram(prog, inp, outp, yr, index):
    if int(yr) == 2008 and int(index) in [2058, 7770]:
        return

    # print('Prog:\n', prog, '====')
    # print('input:\n', inp, '====')
    # print('output:\n', outp, '====')
    if not os.path.exists(temp_folder):
        os.makedirs(temp_folder)
    f = open(temp_folder + '/prog.c', 'w', encoding='utf-8')
    f.write(prog)
    f.close()
    f = open(temp_folder + '/input.txt', 'w', encoding='utf-8')
    for i in inp:
        f.write(i)
    f.close()
    f = open(temp_folder + '/std_output_for_comparison.txt', 'w', encoding='utf-8')
    for i in outp:
        f.write(i)
    f.close()

    os.chdir('tmp/')
    try:
        # subprocess.check_output('g++ prog.c -o prog.o', stderr=subprocess.STDOUT, timeout=10)
        subprocess.run('g++ prog.c -o prog.o', timeout=5, shell=True)
        subprocess.run('prog.o input.txt < input.txt > out.txt', timeout=20, shell=True)
        # os.system('prog.o < input.txt > out.txt')
        result = filecmp.cmp('out.txt', 'std_output_for_comparison.txt', shallow=False)
        # result = True: identical (pass), = False: different (fail)
        print(yr, index, result)
    except Exception:
        print(yr, index, 'Timeout or Error')

    killProcess()
    # if you are using Linux
    #killProcessLinux()
    for f in os.listdir(os.getcwd()):
        os.remove(f)
    os.chdir('..')


def main(yr):
    print('Working on', yr, 'data now.')

    problemInfo = []
    f = open(file_prefix + str(yr) + Problem_file_appendix, mode='r', encoding='utf-8')
    raw = f.readlines()[1:]
    for i in raw:
        problemInfo.append(i[:-1].split(','))
    f.close()

    assert len(problemInfo) > 0

    print('Year', yr, 'has', len(problemInfo), 'tasks.')

    fo = open(file_prefix + str(yr) + C_correct_file_appendix, mode='r', encoding='utf-8')
    reader = csv.reader(
        fo,
        quotechar='"',
        delimiter=',',
        escapechar='\\',
    )
    for i in reader:
        file = i[8].replace('α', '"')
        round = i[2]
        task = i[4]
        index = i[0]
        task_name = [x for j, x in enumerate(problemInfo) if x[2] == round and x[5] == task][0][4]
        with open(problem_file_prefix + task_name + problem_input_appendix, "r") as f:
            problem_input = f.readlines()
        with open(problem_file_prefix + task_name + problem_output_appendix, "r") as f:
            problem_output = f.readlines()
        assert len(problem_output) > 0
        assert len(problem_input) > 0

        singleProgram(file, problem_input, problem_output, yr, index)
        # break

    fo.close()


if __name__ == "__main__":
    year = checkYr(sys.argv[1])
    main(year)
