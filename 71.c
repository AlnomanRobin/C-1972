#include<stdio.h>
int main()
{
    int age=22;
    int *ptr=&age;

    //address
    printf("%p\n",&age);
    printf("%u\n",&age);//u=unsiend.
    printf("%u\n",ptr);
    printf("%u\n",&ptr);

    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    return 0;
}
