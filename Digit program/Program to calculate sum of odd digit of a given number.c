#include <stdio.h>
int main()
{
  int i,n,sum=0;
  printf("Enter the no:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
  if(i%2==1)
  {
    sum=sum+i;
    }
  }
  printf("sum of all odd no=%d",sum);
  return 0;
}