#include<stdio.h>
#include<conio.h>
int main()
{
int n,t,rem,result=0;
printf("enter the number");
scanf("%d",&n);
t=n;
while(n!=0)
{
rem=n%10;
result=result+rem*rem*rem;
n=n/10;
}
if(t==result)
{
printf("%d is armstrong num",n);
}
else
{
printf("%d is not an armstrong num",n);
}
return 0;
}
