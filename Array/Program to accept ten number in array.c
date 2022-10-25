#include <stdio.h>
int main()
{
  int a[10],i;
  printf("Enter 10 numbers: \n");
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n You entered: \n");
  for(i=0;i<10;i++)
  {
    printf("%5d",a[i]);
  }
  return 0;
}