#include <stdio.h>
int main()
{
  int n,i=1;
  printf("Enter integer number: ");
  scanf("%d",&n);
  printf("Multiplication of %d is a:",n);
  while(i<=10)
  {
    printf("\n%d",i*n);
    i=i+1;
  }
  return 0;
}