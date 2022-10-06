
#include <stdio.h>

int main()
{
  int i=0,j=0;
  printf("MUlTIPLICATION OF NUMBER:\n");
  
  for(i=1;i<=10;i++)
  {
    for(j=1;j<=10;j++)
    {
      
        printf("%4d",i*j);
        
    }
    printf("\n");
  }
  return 0;
}