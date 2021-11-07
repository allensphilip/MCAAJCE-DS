#include<stdio.h>
/*program to find the sum and average of three numbers*/

void main()
{
 int a,b,c,sum,avg;

 printf("Enter three numbers:");
 scanf("%d %d %d",&a,&b,&c);
 sum=a+b+c;
 avg=sum/3;
 printf("Sum=%d\n",sum);
 printf("Average=%d",avg);
}
