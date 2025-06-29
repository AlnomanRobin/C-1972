/*Qs:39-Will the address output be same ?
Void printAddress(int n);
int main()
{
}
int n=4;
printf("%p\n",&n);
printAddress(n);
return 0;
void printAddress(int n)
{
printf("%p\n",&n);
}
*/
#include<stdio.h>
void printAddress(int n);
int main()
{
int n=4;
printf("%p\n",&n);
printAddress(n);
printf("address of n is:%u\n",&n);
return 0;
}
void printAddress(int n)
{
printf("%p\n",&n);
printf("address of n is:%u\n",&n);
}
