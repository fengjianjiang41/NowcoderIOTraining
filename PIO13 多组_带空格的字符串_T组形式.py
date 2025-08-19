import sys


def main():
    data = sys.stdin.read().strip().replace(" ", "").splitlines()
    res = []
    for _ in range(2, int(data[0]) * 2 + 1, 2):
        res.append(data[_][::-1])
    print("\n".join(res))


if __name__ == "__main__":
    main()
