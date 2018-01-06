#include<stdio.h>
#include<string.h>
int main()
{
	char str[10000],len,i,j,temp;
	scanf("%s",str);
	len=strlen(str);
	str[len]='.';
	printf("%s",str);
}
