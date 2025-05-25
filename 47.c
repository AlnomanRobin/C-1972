#include<stdio.h>
int main()//(Qs:16)-Print the table of a number input by the user.
{
     int n;
     printf("Enter number:");
     scanf("%d",&n);
     int i;
     for(i=1;i<=10;i++)
     {
         printf("%d\n",n*i);
     }
     return 0;
}
