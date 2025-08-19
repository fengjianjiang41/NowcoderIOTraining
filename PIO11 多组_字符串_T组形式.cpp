#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0;i < t; i++){
        int n; string s;
        cin >> n;
        cin >> s;
        while (--n >= 0) 
            cout << s[n];
        cout << endl;
    }
}
// 64 位输出请用 printf("%lld")