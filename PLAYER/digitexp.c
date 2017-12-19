#include<stdio.h>
void main()
{
int a=9,x=0,i=1,sum=0;
while(i!=10000)
{
x=(a*i)+x;
i=i*10;
sum=sum+x;
}
printf("%d",sum);
}
