#include<stdio.h>
int main()
{
      int x,y,min,i;
      printf("enter a number:\n" );
      scanf("%d%d",&x,&y);
      min=(x<y?x:y);
     for(i=2;i<=min;i++)
    { if(x%i ==0 && y%i == 0)
          break;
    }
    if(i ==min+1)
     printf(" %d  and  %d  it is co prime number",x,y);
     else
     printf(" %d and %d is it is not co prime number",x,y);


}