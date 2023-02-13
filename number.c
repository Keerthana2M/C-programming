#include<stdio.h>
void main()
{
int i,n,j,h;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=i;j<n;j++)
printf(" ");
for(h=1;h<=i;h++)
printf("*  ");
printf("\n");
}
}

