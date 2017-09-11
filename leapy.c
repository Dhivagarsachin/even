#include<stdio.h>
int main()
{
int year;
printf("enter the year");
scanf("%d",&year);
if(year%4==o)
{
if(year%100==0)
{
if(year%400==o)
printf("%d is a leap year",year);
else
printf("%d is not a leap year",year);
}
else
printf("%d is a leap year",year);
}
else
printf("%d is not a leap year",year);
return 0;
}
