#include <stdio.h>
#include<math.h>
int main()//take any two number and gets
{
    int A,B;
    printf("The first number is:");
    scanf("%d",&A);
    printf("\nThe second number is:");
    scanf("%d",&B);
    int sum,sub,mul,div,mod,power;
    sum=A+B;
    sub=A-B;
    mul=A*B;
    div=A/B;
    mod=A%B;
    power=pow(A,B);
    printf("\n\n\n\nThe sum is:%d",sum);
    printf("\n\nThe subtraction is:%d",sub);
    printf("\n\nThe multiplication is:%d",mul);
    printf("\n\nThe division is:%d",div);
printf("\n\nThe modulas is:%d",mod);
printf("\n\nThe power is:%d",power);
return 0;
}
