#include<stdio.h>

int main()
{
    int T;
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        long long n;
        scanf("%lld",&n);

        int sum=0;
        while(n>0)
        {
            int digit = n % 10;
            sum = sum + digit;
            n = n / 10;
        }

        if(sum % 2 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    return 0;
}
