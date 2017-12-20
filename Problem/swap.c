#include<stdio.h>
#include<string.h>
int main()
{
int n,i;
printf("enter n value");
scanf("%d",&n);
char a[n],temp;
printf("enter string");
scanf("%s",a);
n=strlen(a);
if(n%2==0)
{
for(i=0;i<n;i+=2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}

printf("%s",a);
}
else
{
for(i=0;i<n-1;i+=2)
{
temp=a[i];
a[i]=a[i+1];
a[i+1]=temp;
}
printf("%s",a);
}
return(0);
}

