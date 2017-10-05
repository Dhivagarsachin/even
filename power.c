#include<stdio.h>
#include<math.h>
int main
{
double base,exponent,result;
printf("enter a base num");
scanf("%1f",&base);
printf("enter a exponent num");
scanf("%1f",&exponent);
result=pow(base,exponent);
printf("%.11f^%.11f=%.21f",base,exponent,result);
return 0;
