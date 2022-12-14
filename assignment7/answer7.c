#include<stdio.h>
int main ()
{   int n,a;
    printf("enter a number:\n");
    scanf("%d%d",&n,&a);
    for(int i=a;i<n;i++)
    {
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                break;
            else if(i==j+1)
                printf("%d ",i);
        }
    }
 return 0;
}
    
    