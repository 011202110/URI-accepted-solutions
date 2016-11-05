#include <stdio.h>

int main(){

 int i,p=0;
 float n,avg,sum=0;

 for(i=0;i<6;i++){
     scanf("%f",&n);

    if (n>0){
     p++;
     sum=sum+n;
    }
   avg=sum/p;
 }
  printf("%d valores positivos\n%.1f\n",p,avg);

return 0;
}



