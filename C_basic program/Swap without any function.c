#include <stdio.h>
int main()
{
  int a, b, temp;
  printf("Enter the first number : \n");
  scanf("%d",&a);
  printf("Enter the second number : \n");
  scanf("%d",&b);
  printf("Before swap : a=%d,b=%d\n",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("After swap : a=%d,b=%d\n",a,b);
  return 0;
}