#include <stdio.h>


//Compiler version gcc  6.3.0

int main()
{
  int r=0, c=0,k=0;
  printf("Enter number: ");
  scanf("%d",&k);
  for (r=1;r<=k;r++)
  {
    for (c=1;c<=k;c++)
    {
      if(r==1|| k==r ||c==(k-r+1))
      
      {
        printf(" * ");
      }
      else
      {
        printf("    ");
      }
    }
    printf("\n");
  }
  return 0;
}