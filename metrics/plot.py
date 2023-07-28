import json
import os
import matplotlib, matplotlib.pyplot as plt

emptyDict = dict()

# decfuzzer
# src_file = 'results/with_extra_metrics_decfuzzer/dec_seed_all.json'
# w2c2_file = 'results/with_extra_metrics_decfuzzer/dec_w2c2.json'
# wasm2c_file = 'results/with_extra_metrics_decfuzzer/dec_wasm2c.json'
# r2_file_1 = 'results/with_extra_metrics_decfuzzer/dec_result_r2_result.json'
# r2_file_2 = 'results/with_extra_metrics_decfuzzer/dec_result_r2_error.json'
# retdec_file_1 = 'results/with_extra_metrics_decfuzzer/dec_result_retdec_result.json'
# retdec_file_2 = 'results/with_extra_metrics_decfuzzer/dec_result_retdec_error.json'
src_file = 'results/new/dec_seed_all.json'
w2c2_file = 'results/new/dec_w2c2.json'
wasm2c_file = 'results/new/dec_wasm2c.json'
r2_file = 'results/new/dec_r2.json'
retdec_file = 'results/new/dec_retdec.json'

keywords = ['Lines of code', 'Halstead complexity difficulty measure', 'McCabe cyclomatic complexity',
            'Maximum nesting depth', '# goto', '# cast', '# var', '# dead code',
            'goto / LOC', 'var / LOC']
decompilers = ['Source', 'w2c2', 'wasm2c', 'r2', 'retdec']
# each element = one keyword
# each element: src[], w2c2[], wasm2c[], r2[], retdec[]
stats = [
    # sr  w2  wa  r2  re
    [[], [], [], [], []],  # loc
    [[], [], [], [], []],  # hal
    [[], [], [], [], []],  # cyc
    [[], [], [], [], []],  # nes
    [[], [], [], [], []],  # got
    [[], [], [], [], []],  # cas
    [[], [], [], [], []],  # var
    [[], [], [], [], []],  # dea
    [[], [], [], [], []],  # % got
    [[], [], [], [], []],  # % var
]

src_core_func = 'func_1'
w2c2_core_func = 'f2'
wasm2c_core_func_prefix = 'w2c_'
wasm2c_core_func_postfix = '_func_1_0'
r2_core_func = 'func_1'
retdec_core_func = 'func_1'

####
f = open(src_file, mode='r')
raw = json.load(f)
f.close()

src_data = []

for i in raw:
    # print(i)
    one_data = []
    for j in keywords:
        # print(j, raw[i][j][dec_core_func])
        one_data.append(raw[i][j][src_core_func])
    src_data.append([i, one_data, 'N'])
    # print(src_data[-1])
print('Src data parsed: in total', len(src_data), 'programs detected')

####
f = open(w2c2_file, mode='r')
raw = json.load(f)
f.close()

w2c2_data = []

for i in raw:
    one_data = []
    for j in keywords:
        one_data.append(raw[i][j][w2c2_core_func])
    w2c2_data.append([i, one_data, 'N'])
print('w2c2 data parsed: in total', len(w2c2_data), 'programs detected')

####
f = open(wasm2c_file, mode='r')
raw = json.load(f)
f.close()

wasm2c_data = []

for i in raw:
    one_data = []
    for j in keywords:
        one_data.append(raw[i][j][wasm2c_core_func_prefix + i.split('.')[0] + wasm2c_core_func_postfix])
    wasm2c_data.append([i, one_data, 'N'])
print('w2c2 data parsed: in total', len(wasm2c_data), 'programs detected')

####
r2_data = []

f = open(r2_file, mode='r')
raw = json.load(f)
f.close()

for i in raw:
    one_data = []
    for j in keywords:
        one_data.append(raw[i][j][r2_core_func])
    r2_data.append([i, one_data, 'R'])

print('r2 data parsed: in total', len(r2_data), 'programs detected')

####
retdec_data = []

f = open(retdec_file, mode='r')
raw = json.load(f)
f.close()

for i in raw:
    one_data = []
    for j in keywords:
        one_data.append(raw[i][j][retdec_core_func])
    retdec_data.append([i, one_data, 'R'])

print('retdec data parsed: in total', len(retdec_data), 'programs detected')

for i in src_data:
    for j in range(8):
        if i[1][j] == 'Timeout': continue
        stats[j][0].append(i[1][j])
for i in w2c2_data:
    for j in range(8):
        if i[1][j] == 'Timeout': continue
        stats[j][1].append(i[1][j])
for i in wasm2c_data:
    for j in range(8):
        if i[1][j] == 'Timeout': continue
        stats[j][2].append(i[1][j])
for i in r2_data:
    if i[2] == 'B': continue
    for j in range(8):
        if i[1][j] == 'Timeout': continue
        stats[j][3].append(i[1][j])
for i in retdec_data:
    if i[2] == 'B': continue
    for j in range(8):
        if i[1][j] == 'Timeout': continue
        stats[j][4].append(i[1][j])

# output: plots per metric using matplotlib
if 0:
    for i in range(len(keywords)):
        fig = plt.figure(1, figsize=(6, 4))
        plt.subplots_adjust(left=0.11, right=0.98, top=0.94, bottom=0.07, wspace=0.2, hspace=0.2)
        if i in [0, 1, 2, 3, 4, 5, 6, 7]:  # loc
            plt.yscale('log')
        plt.title(keywords[i])
        plt.boxplot(stats[i], positions=range(5), sym='',
                    patch_artist=True,
                    boxprops={'facecolor': 'lightgrey'},
                    medianprops={'color': 'black'})
        plt.xticks(range(5), decompilers)
        plt.show()

# output: stats
import statistics
output_data = [['Source', 'w2c2', 'wasm2c', 'r2', 'retdec'], ]
for i in range(len(keywords)):
    one_data = [keywords[i]]
    for j in range(len(stats[i])):
        if len(stats[i][j]) > 1:
            one_data.append("%.4f" % statistics.mean(stats[i][j]) + " (%.4f)" % statistics.stdev(stats[i][j]))
        elif len(stats[i][j]) == 1:
            one_data.append("%.4f" % statistics.mean(stats[i][j]) + " (N/A)")
        else:
            one_data.append('N/A')
    output_data.append(one_data)

f = open('data_decfuzzer.csv', mode='w')
for i in output_data:
    for j in i:
        f.write(str(j)+',')
    f.write('\n')
f.close()