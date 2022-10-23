#include <stdio.h>
int main()
{
  int n,m;
  printf("Enter any number");
  scanf("%d",&n);
  m=n/2;
  if(m*2==n)
  {
    printf("Even number:");
  }
  else
  {
    printf("Odd number");
  }
  return 0;
}