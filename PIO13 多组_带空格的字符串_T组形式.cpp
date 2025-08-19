#include <iostream>
using namespace std;

int main() {
    int t, n;
    char str[100000];

    scanf("%d", &t);
    getchar();

    while (t--) {
        scanf("%d", &n);
        getchar();

        int idx = 0;
        for (int j = 0; j < n; j++) {
            char s = getchar();
            if (s == ' ') continue;
            str[idx++] = s;
        }

        for (int j = idx - 1; j >= 0; j--) {
            printf("%c", str[j]);
        }
        printf("\n");
    }
}
// 64 位输出请用 printf("%lld")

