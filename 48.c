#include<stdio.h>
int main()//Break statement(Exit the loop)
{
    for(int i=1;i<=8;i++)
    {
        if(i==3)
        {
            break;
        }
        printf("%d\n",i);
    }
    printf("END");
    return 0;
}
