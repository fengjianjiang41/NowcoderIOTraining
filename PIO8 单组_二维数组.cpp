#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int t;
    long long sum;
    for (int i = 0; i < n * m; i++) {
        cin >> t;
        sum+=t;
    }
    cout << sum;
}
// 64 位输出请用 printf("%lld")