#include<stdio.h>
int main()//Write a program to cheak if a number is odd or even.
//even->1;odd->0;
{
int x;
printf("Enter a number:");
scanf("%d",&x);
printf("%d",x%2==0);
return 0;
}
