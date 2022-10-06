#include <stdio.h>
int main()
{
  int num;
  printf("Enter an integer :");
  scanf("%d",&num);
  
  (num%2==0)
  printf("The integer is even %d",num):printf("The integer is odd %d",num);
  
  return 0;
}