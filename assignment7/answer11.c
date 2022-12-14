#include<stdio.h>
int main()
{
    int x,n,count=0;
    printf("enter a number:\n");
    scanf("%d",&n);
     x=n;
    while(x!=0)
    {
        count++;
        if(x&1 == 1)
         break;
         else
         x=x>>2;
    }
    printf("first 1 from lSB is %d",count);
     return 0;
}