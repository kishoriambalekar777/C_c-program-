#include <stdio.h>
int main()
{
  int a[5],i;
  printf("Enter array element: ");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\nReverse array element: ");
  for(i=4;i>=0;i--)
  {
    printf("%d ",a[i]);
  }
  return 0;
 }
 
 