#include<stdio.h>
void main()
{
int a,b;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
printf("The value of a=%d and b=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("The values  after swapping are a=%d, b=%d", a,b);
}
