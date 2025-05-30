#include<stdio.h>
int main()//Qs:20-Print all the numbers from 5 to 50.
{
    for(int i=5;i<=50;i++)
    {
        if(i%2!=0)//odd
        printf("%d\n",i);
    }
    return 0;
}
