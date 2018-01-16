#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],count=0;
	int i;
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			count++;
		}
	}
	printf("%d",count);
}
