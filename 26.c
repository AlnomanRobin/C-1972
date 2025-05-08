#include<stdio.h>
int main()//if-else
{
   int age;
   printf("Enter age:");
   scanf("%d",&age);
   if(age>18)
   {
       printf("Adult\n");
       printf("they can vote\n");
       printf("they can drive\n");
   }
   else//(age<18)
   {
       printf("Not adult\n");
       printf("they can not vote\n");
   }
    return 0;
}
