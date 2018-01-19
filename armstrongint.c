#include<stdio.h>
main()
{
int i,n1,n2,temp,num,rem;
printf("enter any two intervals\n");
scanf("%d%d",&n1,&n2);
printf("\n\n armstrong number bw n1 and n2 are....\n");
for(i=n1+1;i<n2;++i)
{
temp=i;
num=0;
while(temp!=0)
{
rem=temp%10;
num+=rem*rem*rem;
temp/=10;
}
if(i==num)
{
printf("%d",i);
}
}
return 0;
}
