import sys

n,m = map(int,sys.stdin.readline().strip().split())
res = []
for i in range(n):
    # n = int(sys.stdin.readline().strip())
    str_n = sys.stdin.readline().strip()
    res.append(str_n[::-1])
res_z = res[::-1]
for i in res_z:
    print(i)



