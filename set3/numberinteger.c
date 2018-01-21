#include<stdio.h>
#include<string.h>
int main()
{
char c;
printf("enter the string");
scanf("%c",&c);
if(isdigit(c)==0)
{
printf("the sting is numeric",c);
}
else
{
printf("string is not numeric",c);
}
return 0;
}
