#include<stdio.h>
int main()
{
	int base,power,i=0,x=1;
	printf("enter the base");
	scanf("%d",&base);
	printf("enter the power");
	scanf("%d",&power);
	while(i<power)
	{
	x=x*base;
	i++;
    }
    printf("%d power %d is %d",base,power,x);
}
	
