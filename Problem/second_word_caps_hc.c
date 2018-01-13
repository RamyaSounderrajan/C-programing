#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

    char s[100];
    scanf("%[^\n]",s);
    int i,j,count=0,space=0,index;
    if(s[0]=='\0')
    {
    	exit(0);
	}
    for(i=0;s[i]==' ';i++)
    {
  		index=i;
	}
	
    for(i=0;s[i]!='\0';i++)
   {
       if(s[i]==' ')
       {
           space++;
       }
   }

    if(space==0)
    {
        printf("null");
        exit(0);
    }
    
    
   for(i=index;s[i]!='\0';i++)
   {
      
       if((s[i]==' ') && (count==0))
       {
          j=i+1;
          while(s[j]!=' ')
          {
	            if(s[j]=='\0')
	            {
	             	break;
				}
	            if((s[j]>='a') && (s[j]<='z'))
	            {
	                s[j]=s[j]-32;   
	            }
	        printf("%c",s[j]);     
	        j++;	 
          } 
          count++;
          
       }
   }

return (0);
}
