#include <stdio.h>
#include<string.h>
int main() {
	char a[10];
	int i,n;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]>=65 && a[i]<=90)
	    {
	        a[i]=a[i]+32;
	    }
	    else if(a[i]>=97 && a[i]<=122)
	    {
	        a[i]=a[i]-32;
	    }
	    else
	    {
	        continue;
	    }
	}
	printf("%s",a);
	return 0;
}
