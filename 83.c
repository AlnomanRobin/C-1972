#include <stdio.h>
#include <string.h>

int isSubsequence(char a[], char b[]) {
    int i = 0, j = 0;
    int n = strlen(a);
    int m = strlen(b);

    while (i < n && j < m) {
        if (a[i] == b[j]) {
            j++;
        }
        i++;
    }

    if (j == m) return 1;
    else return 0;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n, m;
        char a[1000005], b[1000005];

        scanf("%lld %lld", &n, &m);
        scanf("%s", a);
        scanf("%s", b);

        if (isSubsequence(a, b)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}

