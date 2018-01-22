#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int fun(int s,int e,char str[])
{
	int temp=0,i=0,e1,j;
	e1=e;
	j=s;	
	for(i=0;i<=(e-s)/2;i++)
	{
		
		temp=str[j];
		str[j]=str[e-1];
	  	str[e-1]=temp;
	  	e--;
	  	j++;
	  	
	}
	printf("value of e %d\n",e);
	return(e1);
}
int main()
{
	int i,s,e,count=0,x=0,n,space=0;
	char str[100000];
	printf("enter the string ");
	scanf("%[^\n]s",str);     
	n=strlen(str);
	s=0;
	for(i=0;i<n;i++)
	{	
	if(str[i]== ' ')
	{
		space++;
	}

	if(i==n-1)
		{
			e=i+1;
			if(space==0)
			{
				s=0;
			}
			else
			s=x+1;
			fun(s,e,str);
			printf("%s",str);
			return(str);
		}	
		if((str[i]== ' ') && (count==0))
		{
			e=i;
			x=fun(s,e,str);	
			count++;
			continue;
		}
		if(str[i]==' ' && count==1)
		{	
			e=i;
			s=x+1;
			x=fun(s,e,str);		
		}		
	}
	
	printf("%s",str);
return(0);			
}
