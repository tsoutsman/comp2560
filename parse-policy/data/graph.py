#!/usr/bin/env python3

import json
import matplotlib.pyplot as plt
import numpy as np


def avg(l):
    return sum(l) / len(l)


x = [
    500,
    1000,
    1500,
    2000,
]
x = [6 * size for size in x]

y = [
    2.73,
    61.65,
    113.65,
    311.23,
]

# for size in sizes:
#     file_name = f"{size}.json"
#     with open(file_name) as f:
#         # data.append([x / 10e8 for x in json.load(f)["times"]])
# y.append(avg([x / 10e8 for x in json.load(f)["times"]]))

plt.rcParams.update({"font.size": 24})

fig1, ax1 = plt.subplots()
ax1.set_title("Tool Performance on Synthetic Benchmark")
ax1.set_xlabel("Number of SELinux Statements")
ax1.set_ylabel("Time (s)")
# ax1.set_ylim(0, 0.6)

ax1.plot(x, y, "k-", linewidth=4)
ax1.plot(x, y, "bs", ms=10)
# ax1.bar(x, y, width=900)

plt.xticks(x)
# show plot
plt.show()
