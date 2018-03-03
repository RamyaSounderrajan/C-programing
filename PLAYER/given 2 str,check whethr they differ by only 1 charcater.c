#include <stdio.h>
#include<string.h>
int main() 
{	
char a[10],b[10];	
int i,j,n,n1,count=0;	
scanf("%s %s",a,b);	
n=strlen(a);	
n1=strlen(b);	
if(n==n1)	
{   
for(i=0,j=0;i<n,j<n1;i++,j++)   
{    	    
if(a[i]==b[j])    	   
{    	       
continue;    	  
}    	   
else    	  
{
count++;    	  
}   
}    	
if(count==1)  
{    	    
printf("yes..differ by 1 character");    
}	
}
else	
{
printf("false");
}	
}
