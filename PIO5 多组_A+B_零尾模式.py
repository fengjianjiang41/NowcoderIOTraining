import sys

def main():
    input=sys.stdin.read
    data=input().strip().split('\n')
    result=[]
    for i in range(0,len(data)-1):
        a,b=map(int,data[i].split())
        result.append(a+b)
    print('\n'.join(map(str,result)))

if __name__=="__main__":
    main()