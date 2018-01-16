#include<stdio.h>
int main()
{
	int a=10,b=15,temp=0;
	temp=a;
	a=b;
	b=temp;
	printf(" AFTER SWAPPING a=%d b=%d",a,b);
}
