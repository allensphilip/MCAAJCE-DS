#include<stdio.h>
void main()
{
 int a,b,c;
 printf("Enter three numbers:");
 scanf("%d %d %d",&a,&b,&c);
 if(a>b && a>c)
 {
  printf("\n %d is larger\n\n",a);
 }
 else if(b>c)
 {
  printf("\n %d is larger\n\n",b);
 }
 else
 {
  printf("\n %d is larger\n\n",c);
 }
}
