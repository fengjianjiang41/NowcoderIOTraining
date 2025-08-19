#include <iostream>
using namespace std;

int main() {
int n; string s;
cin >> n;
cin >> s;
while (--n >= 0) 
    cout << s[n];
}
// 64 位输出请用 printf("%lld")