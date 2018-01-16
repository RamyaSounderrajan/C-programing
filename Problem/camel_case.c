#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[1000];
	int l,i,j,x,flag;
	printf("enter the string ");
	gets(s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(i==0)
		{
			s[i]=s[i]-32;
			continue;
		}
		if(s[i]==' ')
		{		
			if((s[i+1]>='a') && (s[i+1]<='z') )	
			s[i+1]=s[i+1]-32;
			else
			{
				printf("invalid char %c encountered at position %d",s[i+1],i+1);
				exit(0);
			}
		}
	}
puts(s);
}
