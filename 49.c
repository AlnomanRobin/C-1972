#include<stdio.h>
int main()//Qs:17 -keep taking numbers as input from user until user enters an odd number.
{
    int n;
    do
    {
        printf("Enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%2!=0)
        {
            break;
        }
    }
    while(1);
    {
        printf("Thank you");
    }
    return 0;
}
