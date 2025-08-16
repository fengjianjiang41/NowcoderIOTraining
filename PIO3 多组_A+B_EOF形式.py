import sys

res = []
for _ in sys.stdin:
    a, b = map(int, _.split())
    res.append(str(a + b))
print("\n".join(res))