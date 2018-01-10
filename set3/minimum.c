#include<stdio.h>
int main()
{
int i,j,a[50],size,temp,n;
printf("enter the array size\n");
scanf("%d",&size);
printf("enter the element");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(i=0;i<n-1;i++)
{
for(j=1;j<n;j++)
{
if(a[i]<a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("the sorted array is %d");
scanf("%d",&n[0]);
}
return 0;
