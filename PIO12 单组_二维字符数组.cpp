#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    cin >> n >> m;

    vector<string> g(n);

    for(int i = 0; i < n; ++i) {
        cin >> g[i];
    }

    reverse(begin(g), end(g));
    for(int i = 0; i < n; ++i) {
        reverse(g[i].begin(), g[i].end());
    }

    for(int i = 0; i < n; ++i) {
        cout << g[i] << '\n';
    }

}
// 64 位输出请用 printf("%lld")