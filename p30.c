#include<stdio.h>
int main()
{
int fib[20],n,i;
printf("enter the number of fibonacci series to be generated\n");
scanf("%d",&n);
fib[0]=0;
fib[1]=i;
if(n==1)
printf("fibonacci series is %d",fib[0]);
else if(n==2)
printf("fibonacci series is %d\t%d",fib[0],fib[1]);
else
for(i=2;i<n;i++)
{
fib[i]=fib[i-1]+fib[i-2];
}
printf("the fibonacci series are:\n");
for(i=0;i<n;i++)
{
printf("%d\t",fib[i]);
}
return 0;
}

