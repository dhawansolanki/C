#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define pi 3.142
void main()
{
int degree,i;
float x,nume,denom,sum=0,term;
printf("enter the value of degree\n");
scanf ("%d", &degree);
x=degree*(pi/180);
nume=x;
denom=1;
i=2;
do
{
term=nume/denom;
nume= -nume*x*x;
denom=denom*i*(i+1);
sum=sum+term;
i=i+2;
}
while(fabs(term)>0.000001);
printf("sin(%d)=%f without using built in function \n",degree,sum);
printf("sin(%d)=%f using built in function \n",degree,sin(x));
}
