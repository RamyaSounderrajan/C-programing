#include<stdio.h>
int main()
{
int min;
int hr;
scanf("%d",&min);
if(min<60)
{
	printf("%d",min);
	return(min);
}
while(min>=60)
{
hr++;
min=min-60;
}

printf("%d hrs %d mins",hr,min);
}
