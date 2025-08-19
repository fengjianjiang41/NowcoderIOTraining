import sys

n = int(sys.stdin.readline().strip().split()[0])
s = sys.stdin.readline().strip()
if n == len(s):
    print(s[::-1])