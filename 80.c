#include <stdio.h>
#include <math.h>
//Counting Divisors
int main() {
    int n;
    scanf("%d", &n);
    while (n--) {
        int x;
        scanf("%d", &x);
        int count = 0;
        int sq = sqrt(x);
        for (int i = 1; i <= sq; i++) {
            if (x % i == 0) {
                count++;
                if (i != x / i) count++;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}
