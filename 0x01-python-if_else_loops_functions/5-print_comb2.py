#!/usr/bin/python3
for x in range(0, 99):
        print("{:02d}".format(x), end=", " if x < 99 else "\n")
