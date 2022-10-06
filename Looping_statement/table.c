#include <stdio.h>
int main()
{
  int num,temp,i;
  printf("Enter the number :");
  scanf("%d",&num);
  temp=num;
  for(i=1;i<=10;i++)
  {
    printf("\t\t \n%d ",num*i);
  }
  return 0;
}