#include<stdio.h>
#include<conio.h>
int main()
{
int n,c=0;
printf("enter the number");
scanf("%d",&n);
while(n!=0)
{
n=n/10;
c++;
}
printf("num of digits in an integer is %d",c);
}
