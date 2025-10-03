#include <stdio.h>

long long sum_upto(long long n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long A, B;
        scanf("%lld %lld", &A, &B);

        if (A > B) {
            long long temp = A;
            A = B;
            B = temp;
        }

        long long result = sum_upto(B) - sum_upto(A - 1);
        printf("%lld\n", result);
    }

    return 0;
}

