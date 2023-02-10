#include<stdio.h>
void main()
{
int a,b;
printf("*********SWAPING OF TWO NUMBERS*********\n");
printf("Enter a two numbers\n");
scanf("%d%d",&a,&b);
b=a+b;
a=b-a;
b=b-a;
printf("the swap number is %d and %d",a,b);
}
