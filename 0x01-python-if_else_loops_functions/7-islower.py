#!/usr/bin/python3
def islower(c):
    return ord('a') <= ord(c) <= ord('z')

    # Test the function
    print(islower('a'))  # True
    print(islower('A'))  # False
    print(islower('z'))  # True
    print(islower('Z'))  # False
    print(islower('1'))  # False
