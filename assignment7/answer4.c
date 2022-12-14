#include<stdio.h>
int main ()
{ 
      int a,b,hcf;
      printf("enter a number\n");
      scanf("%d%d",&a,&b);
     for((hcf=(a<b)?a:b);hcf>=1;hcf--)
     {
      if(a%hcf == 0  && b%hcf == 0)  
     {    
           printf("calculate of %d and %d is %d",a,b,hcf); 
           break;
      }
   
    }
     return 0;
}



