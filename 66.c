#include<stdio.h>//Qs:31-Factorial of n.
int fact(int n);
int main()
{
printf("factorial is : %d",fact(4));
return 0;
}
int fact(int n)
{
if(n==0)
{
return 1;
}
int factNm1=fact(n-1);
int factN=factNm1*n;
return factN;
}
