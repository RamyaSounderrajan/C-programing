//scanf("[ ]*%ns[ ]*[\n]", string);

#include <stdio.h>
#include<string.h>
int main() 
{
	int i,j,temp=0;
	char s1[100];
	gets(s1);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]>='0' && s1[i]<='9')
		printf("%c",s1[i]);
	}
	
}
