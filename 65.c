#include<stdio.h>//Qs:30-Sum of first n natural numbers.
int sum(int n);//sum(n-1)+n
int main()
{
printf("sum is : %d",sum(7));
return 0;
}
//recursiv function.
int sum(int n)
{
if(n==1)
{
return 1;
}
int sumNm1=sum(n-1);//sum of 1 to n
int sumN=sumNm1+n;
return sumN;
}
