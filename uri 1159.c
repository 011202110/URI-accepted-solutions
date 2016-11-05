#include <stdio.h>
int main(){
 int n,i,j,k=0;

 for(j=0;j<100000;j++){
 scanf("%d",&n);
 k=0;
  if(n==0){
        break;
    }
  else if (n % 2 == 0){
       for (i = 0; i <= 4; i++,n+=2){
          k=k+n;
         }
    }
  else if (n % 2 != 0){
       n++;
       for (i = 0; i <= 4; i++,n+=2){
          k=k+n;
         }
    }

  printf("%d\n",k);
 }
return 0;
}

