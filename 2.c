#include<stdio.h>
void main()
{
 int a,b;
 printf("Enter two number:");
 scanf("%d %d",&a,&b);
 printf("Before Swap: \nA=%d \nB=%d",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nAfter Swap: \nA=%d \nB=%d",a,b);

}

