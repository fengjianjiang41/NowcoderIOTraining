import sys

for line in sys.stdin:
    a = line.split()
    b = int(a[0])
    c = f"{b:09d}"
    print(c)
