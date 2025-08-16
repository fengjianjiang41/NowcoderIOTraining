#include <iostream>
using namespace std;

int main() {
    int a, t, n;
    long long b;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n;
        b=0;
        for (int j = 0; j < n; j++){
            cin >> a;
            b+=a;
        }
        cout << b << endl;
    }
}
// 64 位输出请用 printf("%lld")