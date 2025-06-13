#include<stdio.h>
void printHello();//Qs:27-Write 2 functios-one to print"Hello"& second to print "good bye".
void printGoodbye();
int main()
{
printHello();//function call.
printGoodbye();
printHello();
return 0;
}
//Function deffination.
void printHello()
{
printf("Hello!\n");
}
void printGoodbye()
{
printf("Goodbye\n");
}
