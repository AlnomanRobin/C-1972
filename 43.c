#include<stdio.h>
int main()//print the sum of first n natural numbers.(5=1+2+3+4+5=15)
{
    int n;
    printf("%d",n);
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;//sum+=i
    }
    printf("sum is %d\n",sum);
    return 0;
}
