#include <stdio.h>
#include<string.h>
int main() 
{
	char a[10];
	char k;
	int n,i;
	scanf("%s %c",a,&k);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
	    {
	        printf("%d",i+1);
	        break;
	    }
	}
	
}
