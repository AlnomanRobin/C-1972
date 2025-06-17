#include<stdio.h>//Qs:32-Write a functio to convertcelsius to fahrenheit.
float convertTemp(float celsius);
int main()
{
float far=convertTemp(37);
printf("far:%f",far);
return 0;
}
float convertTemp(float celsius)
{
float far=celsius*(9.0/5.0)+32;
return far;
}
