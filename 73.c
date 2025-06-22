#include<stdio.h>
int main()//Qs:37-Print The value of 'i' from its pointer to pointer.
{
//float price=100.00;
//flota *ptr=&price;
//float **pptr=&ptr;
int i=5;
int *ptr=&i;
int **pptr=&ptr;
printf("%d\n",**pptr);
return 0;
}
