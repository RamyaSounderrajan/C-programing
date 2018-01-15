#include <stdio.h>
int power(int x,int c)
{
	int i=0,p=1;
	while(i<c)
	{
	p=p*x;
	i++;
    }
	return (p);
}
int order(int n)
{
	int count=1;
	while(n>=10)
	{
		n=n/10;
		count++;
	}
	return (count);
}
int main()
{
    int n, originalInteger,x,y,sum=0,c;

    printf("Enter an integer: ");
    scanf("%d", &n);
    originalInteger = n;
    c=order(n);
    while( n!=0 )
    {
    	x=n%10;
    	y=power(x,c);
    	sum=sum+y;
    	n=n/10;
	}
	if (originalInteger == sum)
        printf("%d is a palindrome.", originalInteger);
    else
        printf("%d is not a palindrome.", originalInteger);
    
return(0);
	}
