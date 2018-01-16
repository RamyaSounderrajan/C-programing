#include <stdio.h>
int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2; 
    int flag=0;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    if (v1<=v2)
    {
    	if (x1==x2 && v1==v2)
    	printf("YES");
    	else
    	printf("NO");
	}
	else
	{
			while(x1<x2)
			{
				x1+=v1;
				x2+=v2;
				if (x1==x2)
				{flag=1;break;}
			}
		if (flag==1)
    	printf("YES");
    	else
    	printf("NO");
	}
    return 0;
} 
