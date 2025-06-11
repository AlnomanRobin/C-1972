#include<stdio.h>
int main()//Print reverse of the table for a number n.
{
    int n;
    printf("Enter The number : ");
    scanf("%d",&n);

    for(int i=10;i>=1;i--)
    {
        printf("The revers number is:%d\n",n*i);
    }
    return 0;
}
