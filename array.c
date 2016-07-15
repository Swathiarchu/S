#include<stdio.h>
#include<conio.h>
void main()
{
int a[50],b,i,j,k;
clrscr();
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
for(j=i+1;j<b;j++)
{
if(i!=j)
{
for(k=0;k<b;k++)
{
if(a[i]+a[j]==a[k])
printf("%d+ %d= %d\n",a[i],a[j],a[k]);
}
}
}
}
getch();
}
