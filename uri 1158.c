#include <stdio.h>
int main(){
 int n,r,i,j,k=0,x,y;

scanf("%d",&r);
 for(j=0;j<r;j++){
 scanf("%d %d",&x,&y);
 k=0;

   if (x % 2 == 0){
        x++;
       for (i = 0; i < y; i++,x+=2){
          k=k+x;
         }
    }
  else if (x % 2 != 0){
       for (i = 0; i < y; i++,x+=2){
          k=k+x;
         }
    }

  printf("%d\n",k);
 }
return 0;
}

