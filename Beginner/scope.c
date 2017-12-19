#include<stdio.h>

int count = 100;          
void main()

{

   int count = 10;         

   printf("Global variable is %d",count);

   printf("Local variable is %d",count);
  {
   int count=15;
   
   printf("block variable is %d",count);
  }
   

}
