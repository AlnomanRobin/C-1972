#include<stdio.h>
int main()//Qs:18 -keep taking numbers as input from user until user enters a number which is multiple of 7.
{
    int n;
    do
    {
        printf ("Enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);
        if(n%7==0)
        {
            break;//multiple of 7
        }
    }
    while(1);
    {
        printf("Thank you");
    }
    return 0;
}
