#include<stdio.h>
int main()
{
int i,n,c=0;
printf("enter a number n");
scanf("%d",&n);
for(i=1;i<=1000;i++)
{
if(n%i==0)
{
c++;
}
}
if(c==2)
{
printf("n is prime num");
}
else
{
printf("n is not a prime num");
}
return 0;
}
