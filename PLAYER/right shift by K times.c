#include <stdio.h>
int main()
{
	int n,m;
	float res;
	scanf("%d %d",&n,&m);
	res=n>>m;
	printf("%0.2f",res);
	return 0;
}
