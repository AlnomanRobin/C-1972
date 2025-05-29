#include<stdio.h>
int main()//Continue statement(skip to next iteration)
{
    for(int i=1;i<=7;i++)
    {
        if(i==3)
        {
            continue;//skip
        }
        printf("%d\n",i);
    }
    return 0;
}
