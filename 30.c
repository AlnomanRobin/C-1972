#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number:");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("positive\n");
        if(num%2==0)
        {
            printf("even\n");
        }
        else
        {
            printf("odd\n");
        }
    }
    else
    {
        printf("negative\n");
    }
    return 0;
}
