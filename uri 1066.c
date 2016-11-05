#include <stdio.h>

int main(){
 int i,p=0,r=0,t=0,m=0,n;
 for(i=0;i<5;i++){
  scanf("%d",&n);

  if(n%2==0){
    t++;        //count the even number in the input value
  }
  else{
    m++;         //count the odd number in the input value
  }
  if (n>0){
  p++;          //count the positive number in the input value
  }
  else if(n<0){
    r++;           //count the negative number in the input value
  }
 }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)",t,m);

  printf("\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",p,r);

return 0;
}

