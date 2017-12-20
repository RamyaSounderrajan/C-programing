#include<stdio.h>
int main()
{
	int h1,h2,m1,m2,mins,d1,d2,res;
	scanf("%d %d",&h1,&m1);
	scanf("%d %d",&h2,&m2);
	d1=h2-h1;
	mins=d1*60;
	if(m1>m2)
	d2=m1-m2;
	else
	d2=m2-m1;
	res=mins+d2;
	printf("the difference is %d mins",res);
	printf("  (i.e) %d hour %d mins",d1,d2);
	return(0);
}
