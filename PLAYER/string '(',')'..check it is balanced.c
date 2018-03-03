#include<stdio.h>
#include<string.h>
int main()
{
    char a[10];
    int count1=0,count2=0,i;
    scanf("%s",a);
    int n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='(')
        {
            count1++;
        }
        else if(a[i]==')')
        {
            count2++;
        }
    }
    if(count1==count2)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }

}
