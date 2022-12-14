#include<stdio.h>
int main()
{
int num,a=0,b=1,c=0;
printf("enter a number\n");
scanf("%d",&num);
for(int i=2;i<=num;i++)
{
    c=a+b;
      a=b;
      b=c;
      }

      printf("%d of fibbonaci series is %d\n",num,b);
}

    