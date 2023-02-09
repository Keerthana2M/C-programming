#include<stdio.h>
void main()
{
char i,j;
int n;
printf("enter a number");
scanf("%d",&n);
for(i=n;i>=65;i--)
{
printf("\n");
for(j=i;j>=65;j--)
printf("%c",i);
}
}
