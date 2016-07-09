#include<stdio.h>
void main()
{
int a[50],sum=0,i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
i=0;
do
{
for(i=0;i<=n;i++)
{
sum=sum+a[i];
}
}
while(a[i]!=0&&a[i]<=n);
printf("%d",sum);
getch();
}
