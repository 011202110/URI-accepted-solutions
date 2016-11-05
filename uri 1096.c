#include <stdio.h>

int main()
{
   int i, j;

        for(i=1;i<=9;i++){
          for ( j = 7; j >= 5; j -= 1){
           if(i%2!=0)
      printf("I=%d J=%d\n", i, j);
          }
        }

   return 0;
}



