#include<stdio.h>
main()
{
int n,n1,n2,k,remarks;
printf("enter any 2 num");
scanf("%d%d",&n1&n2);
printf("\n\n the prime nums in the given range are...\n")
for(n=n1;n<=n2;++n)
{
remarks=0;
for(k=2;k<=n/2;k++)
{
if((n%k)==0)
{
remarks++;
break;
}
if(remark==0)
printf("\n %d",n);
}
return 0;
}
