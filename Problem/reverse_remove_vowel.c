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
	if(n==1)
	{
		printf("enter more than one character");
	}
	for(i=0;i<n;i++)
	{
	   if(s[i]<'a' || (s[i]>'z'&&s[i]<'A') || s[i]>'Z') 
	      printf("number or character encountered\n");
	      printf("enter only alphabets")
	      break;
	}
	exit(0);
	
	if(n>1)
	{
	for(i=0;i<n/2;i++)
	{
		temp=s[i];
		s[i]=s[x-1];
	  	s[x-1]=temp;
	  	x--;
	}
	printf("the reversed string is: %s\n",s);
	
	  for(i=0;i<n;i++)
	{
	if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
	{	
	for(j=i;j<n;j++)
	{
	s[j]=s[j+1];
	}
	n--;
	}
	}
	printf("final string without vowel:%s",s);
}
}

