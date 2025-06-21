#include<stdio.h>//Qs:34-Write a function to print n terms of the Fibonacci sequence.
/*fib(n)=fib(n-1)+fib(n-2)
fib(3)=fib(2)+fib(1)
fib number: 0 1 1 2 3 5 8 13 21.....
*/
int fib(int n);

int main()
{
    printf("%d",fib(6));//fib(6);
    return 0;
}

int fib(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    int fibNm1=fib(n-1);
int fibNm2=fib(n-2);
int fibN=fibNm1+fibNm2;
//printf("fib of %d is:%d\n",n,fibN);
return fibN;
}
