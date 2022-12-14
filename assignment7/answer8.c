#include<stdio.h>
int main ()
{   int i,j,n,count=0;
    printf("enter a number:\n");
    scanf("%d",&n);
    for( i=n;i>0;i++)
    {
        count=0;
        for( j=1;j<=i;j++)
        {
            if(i%j==0) 
              count++;
            
        }
            if(count == 2)
            {
                printf("next number is %d",i);
                break;
            }
        
    }
    
 return 0;
}
    
    