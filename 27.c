#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("adult\n");
    }
    else if (age>13&&age<18)
    {
        printf("Teenager\n");
    }
    else//(age<=13)
    {
        printf("child\n");
    }
    return 0;
}
