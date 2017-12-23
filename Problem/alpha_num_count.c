/*065 to090 and 097 to 122*/
/*32*/
/*048 to 057*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int alpha_count=0,num_count=0,spclchar_count=0,space_count=0,i,n;
	char a[100];
	printf("enter string\n");
	 scanf("%[^\n]", a);
	n=strlen(a);
		for(i=0;i<n;i++)
		{
			if((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z'))
				alpha_count++;
			else if(a[i]==' ')
				space_count++;
			else if(a[i]>='0' && a[i]<='9')
				num_count++;
			else
				spclchar_count++;
		}
		printf("alphabet : %d\n",alpha_count);
		printf("number : %d\n",num_count);
		printf("space : %d\n",space_count);
		printf("spcl char : %d",spclchar_count);
}
