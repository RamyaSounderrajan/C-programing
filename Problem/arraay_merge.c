#include<stdio.h>
int main()
{
	int n1,n2,a1[100],a2[100],i,j,b[200],k=0,count=0,x;
	printf("MERGING TWO SORTED ARRAY\n");
	printf("PRINT ARRAY ELEMENTS ONLY IN SORTED ORDER\n");
	printf("enter n1 and its elements\n");
	scanf("%d",&n1);
	for(i=0;i<n1;i++)
	scanf("%d",&a1[i]);
	printf("enter n2 and its elements\n");
	scanf("%d",&n2);
	for(i=0;i<n2;i++)
	scanf("%d",&a2[i]);
	i=0;
	j=0;
	k=0;
	while((i<n1) && (j<n2))
	{	
		if(a1[i]<=a2[j])
		{
			b[k]=a1[i];
			i++;
			k++;
		    	
		
		}
		else 
		
		{
			b[k]=a2[j];
			j++;
			k++;
            
		}
	}
	//PRINTING THE MISSING OR REMAINING ELEMENTS//
	while(i<n1)
	{
		b[k]=a1[i];
		i++;
		k++;
		
	}
		while(j<n2)
	{
		b[k]=a2[j];
		j++;
		k++;
		
	}
	for(i=0;i<(n1+n2);i++)
	printf("%d ",b[i]);
}
