#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],count=1;
	int i,n;
	gets(str);
	n=strlen(str);
	for(i=0;str[i]!='\0';i++)
	{
		
		if((str[i]==' ') && (i!=0) && (i!=(n-1)))
		{
			count++;
		}
	}
	printf("%d",count);
}
