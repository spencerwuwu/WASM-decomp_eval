#!/usr/bin/env python3
import sys
import os


input_folders = [
        "em_output_O0", 
        "em_output_O1", 
        #"em_output_O2", 
        #"em_output_O3"
        ]


from subprocess import Popen, PIPE, STDOUT

def my_popen(cmd):
    print(" +", cmd)
    try:
        process = Popen(cmd, shell=True, stdout=PIPE, stderr=PIPE)
        ret, err = process.communicate()
    except subprocess.CalledProcessError as e:
        print(e.output)


def generate_asts(input_dir, output_folder):
    if not os.path.exists(output_folder):
        os.makedirs(output_folder)
    for c_file in os.listdir(input_dir):
        if not c_file.endswith(".c"):
            continue
        cmd = "cd %s && clang -c -emit-ast %s" % (input_dir, c_file)
        my_popen(cmd)
    command = "mv %s/*.ast %s" % (input_dir, output_folder)
    my_popen(command)


if __name__ == '__main__':
    for input_dir in input_folders:
        generate_asts(input_dir + "/decompiled/", "../asts/" + input_dir)
