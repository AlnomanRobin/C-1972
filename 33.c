#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your number:");
    scanf("%d",&mark);
    if(mark>=0&&mark<30)
    {
        printf("Fail\n");
    }
    else if(mark>=30&&mark<=100)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Wrong mark\n");
    }
    return 0;
}
