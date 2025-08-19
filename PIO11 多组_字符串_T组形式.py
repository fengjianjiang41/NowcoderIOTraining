import sys


def main():
    data = sys.stdin.read().split()
    t = int(data[0])
    ptr = 1
    results = []

    for _ in range(t):
        s = data[ptr + 1]
        results.append(s[::-1])
        ptr += 2

    print("\n".join(results))


if __name__ == "__main__":
    main()
