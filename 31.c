#include<stdio.h>
int main()
{
    int mark;
    printf("inter your mark:");
    scanf("%d",&mark);
    if(mark>30&&mark<=100)
    {
        printf("Pass\n");
        //if(mark)
    }
    else if(mark>100)
    {
        printf("The number is not curect!...\n");
    }
    else//(mark<=30)
    {
        printf("Fail\n");
    }
    return 0;
}
