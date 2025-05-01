#include<stdio.h>
#include<math.h>
int main()//logical Operators(1=true 0=false)
{
printf("%d\n",4>3&&5>2);// &&=AND(t_t=t);(t_f=f);(f_f=f)
printf("%d\n",4<3&&5>2);
printf("%d\n",3>4||5>2);// ||=OR(t_t=t);(t_f=t);(f_f=f)
printf("%d\n",!(5>1));// !=not
printf("%d\n",!((5>1)&&(3>4)));
return 0;
}
