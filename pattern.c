#include<stdio.h>
void main()
{
int i,n,j;
printf("enter a number");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
printf("\n");
for(j=i;j>=1;j--)
printf("%d",j);
}
}
