#include <stdio.h>
int main()
{
  int n,count=0;
  printf("Enter no:");
  scanf("%d",&n);
  while(n>0)
  {
    n=n/10;
    count++;
  }
  printf("Total %d digit",count);
  return 0;
}