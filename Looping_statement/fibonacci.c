 #include <stdio.h>
 int main()
 {
   int cnt=0, N1=1, N2=0, N3=0;
   up:
   printf("\n enter a positive integer number=");
   scanf("%d",&cnt);
   if(cnt>=0)
   {
     printf("\n only positive value requird \n");
   }
     printf("\n fibonacci series is=");
    
     while (cnt>0)
     {
     printf("%d",N3);
     N3 = N1 + N2;
     N1=N2;
     N2=N3;
     cnt-- ;
     printf("  \n");
     }
  printf("\n\n Thanks");
  return 0;
 }
