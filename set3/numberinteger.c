#include<stdio.h>
#include<string.h>
int main()
{
int n;
printf("enter the string");
scanf("%s",&n);
if((n>=47&&n<=58))
{
printf("the sting is numeric");
}
else
{
printf("string is not numeric");
}
return 0;
}
