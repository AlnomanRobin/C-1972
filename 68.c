#include<stdio.h>//Qs:33-Write a function to calculate Percentage of a Student from marks in science, Math & Sanskrit.
int calcPercentage(int science,int math,int sanskrit);
int main()
{
int sc=98;
int math=95;
int sanskrit=99;
printf("percentage is:%d",calcPercentage(sc,math,sanskrit));
return 0;
}
int calcPercentage(int science,int math,int sanskrit)
{
//int perc=((science+math+sanskrit)/3);
return ((science+math+sanskrit)/3);//perc;
}
