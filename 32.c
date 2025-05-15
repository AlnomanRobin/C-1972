#include<stdio.h>
int main()
{
    int mark;
    printf("inter your mark:");
    scanf("%d",&mark);
    if(mark>=30&&mark<=100)
    {
        printf("Pass\n");
        printf("And his result is:");
        if(mark<=100&&mark>=80)
        {
            printf("A+\n");
        }
        if(mark<80&&mark>=75)
        {
            printf("A\n");
        }
        if(mark<75&&mark>=70)
        {
            printf("A-\n");
        }
        if(mark<70&&mark>=65)
        {
            printf("B+\n");
        }
        if(mark<65&&mark>=60)
        {
            printf("B\n");
        }
        if(mark<60&&mark>=55)
        {
            printf("B-\n");
        }
        if(mark<55&&mark>=50)
        {
            printf("C+\n");
        }
        if(mark<50&&mark>=45)
        {
            printf("C\n");
        }
        if(mark<45&&mark>=40)
        {
            printf("C-\n");
        }
        if(mark<40&&mark>=35)
        {
            printf("D+\n");
        }
        if(mark<35&&mark>=30)
        {
            printf("D\n");
        }
        if(mark<35&&mark>=30)
        {
            printf("D\n");
        }
    }
    else if(mark>100)
    {
        printf("The number is not curect!...\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}
