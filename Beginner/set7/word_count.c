#include <stdio.h>

#include<string.h>

int main(void)

{
	int i,n,count=1;
	char a[10];
	gets(a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
