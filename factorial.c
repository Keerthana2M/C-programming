#include<stdio.h>
void main()
{
int i,n,f=1;
printf("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
f=f*i;
}
printf("the factorial number is %d\n",f);

}
