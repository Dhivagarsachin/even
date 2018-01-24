#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the value of a and b\n");
scanf("%d%d",&a,&b);
a=a^b;
b=a^b;
a=b^a;
printf("%d%d",a,b);
return 0;
}
