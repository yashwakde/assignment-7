#include<stdio.h>
int main()
{
    int n,r,t,s;
    printf("enter a number:\n");
    scanf("%d",&n);
    for(n;n<=1000;n++)
    {
        s=0;
        t=n;
    while(t!=0)
    {
        r=t%10;
        s=s+(r*r*r);
        t=t/10;
    }

    if(n==s)
    {
        printf("the armstrong number are:%d\n",n);

    }
     


}
}