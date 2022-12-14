#include<stdio.h>
void main()
{int x, num,fib1=0,fib2=1,fib3,count=0;
printf("enter a number\n");
scanf("%d%d",&num,&x);
printf("%d\n",fib1);
printf("%d\n",fib2);
count=2;
while(count<num)
{
      fib3=fib1+fib2;
      count++;
      printf("%d\n",fib3);
      if(x == fib3)
      {
            printf(" it is present\n");
      }
      else
      printf("it is not present\n");
      fib1=fib2;
      fib2=fib3;
}
     
    
}
