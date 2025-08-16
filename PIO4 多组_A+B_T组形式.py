# import sys

# index = 0
# for line in sys.stdin:
#     a = line.split()
#     if index == 0:
#         line_num = int(a[0])
#     else:
#         print(int(a[0])+int(a[1]))
#     index += 1

import sys

def main():
    data = list(map(int, sys.stdin.read().split()))
    t = data[0]
    index = 1
    res = []
    for _ in range(t):
        a = data[index]
        b = data[index + 1]
        res.append(str(a + b))
        index += 2
    print('\n'.join(res))

if __name__ == "__main__":
    main()