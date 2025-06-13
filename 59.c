#include<stdio.h>
void namaste();//Qs:28-Write a function that prints Namaste if user is indian & Bonjour if the user is French.
void Bonjour();
int main()
{
printf("enter f for french & i for indian :");
char ch;
scanf("%c",&ch);
if(ch=='i')
    {
        namaste();
    }
    else
    {
        Bonjour();
    }
    return 0;
}
void namaste()
{
    printf("Namaste\n");
}
void Bonjour()
{
    printf("Bonjour\n");
}
