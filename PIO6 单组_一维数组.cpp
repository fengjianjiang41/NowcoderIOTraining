#include <iostream>
using namespace std;

int main() {
    int a; int n;
    long long b;
    cin >> n;
    while (cin >> a) { // 注意 while 处理多个 case
        b+=a;
    }
    cout << b;
}
// 64 位输出请用 printf("%lld")