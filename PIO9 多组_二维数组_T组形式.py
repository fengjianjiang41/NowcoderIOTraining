import sys

def main():
    data = list(map(int, sys.stdin.read().split()))
    ptr = 0
    t = data[ptr]
    ptr += 1
    results = []
    for _ in range(t):
        n = data[ptr]
        ptr += 1
        m = data[ptr]
        x = n * m
        ptr += 1
        arr = data[ptr:ptr+x]
        ptr += x
        results.append(sum(arr))
    print('\n'.join(map(str, results)))

if __name__ == "__main__":
    main()
