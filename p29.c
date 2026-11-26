#include<stdio.h>
int main()
{
int a[20],sum=0,esum=0,osum=0,n,i;
printf("enter the array size:");
scanf("%d",&n);
printf("enter the array elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
if((a[i]%2)==0)
esum=esum+a[i];
else
osum=osum+a[i];
}
printf("the sum of all number is %d \n",sum);
printf("the sum of even number is %d \n",esum);
printf("the sum of odd number is %d \n",osum);
return 0;
}

