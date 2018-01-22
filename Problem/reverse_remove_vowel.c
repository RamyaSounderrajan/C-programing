#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j,x,temp;
	char s[100];
	printf("enter the string");
	scanf("%s",s);
	n=strlen(s);
	x=n;
	for(i=0;i<n/2;i++)
	{
		temp=s[i];
		s[i]=s[x-1];
	  	s[x-1]=temp;
	  	x--;
	}
	printf("the reversed string");
	printf("%s\n",s);
	
	for(i=0;i<n;i++)
	{
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
	{
	j=i;
	while(j<n)
	{
		s[j]=s[j+1];
	    j++;	
	}
	n=n-1;
    }
    }
    printf("reversed string aftr removing vowel")
    printf("%s",s);
}
