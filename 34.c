#include<stdio.h>
int main()//Write a program to find if a charecter entered by user is upper
{
    char ch;
    printf("Enter character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {
        printf("Upper case\n");
    }
    else if(ch>='a'&&ch<='z');
    {
        printf("Lower case\n");
    }
    /*else
    {
        printf("not english letter\n");
    }*/
    return 0;
}
