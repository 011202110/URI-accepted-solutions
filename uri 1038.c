#include<stdio.h>

int main()
{
  int X,Y;
  double total;
  scanf("%d %d",&X,&Y);

  if(X==1){
        total=Y*4;
    printf("Total: R$ %.2f\n",total);
  }
  else
  if(X==2){
        total=Y*4.5;
    printf("Total: R$ %.2f\n",total);
  }
  else
  if(X==3){
      total=Y*5;
    printf("Total: R$ %.2f\n",total);
  }
  else
  if(X==4){
      total=Y*2;
    printf("Total: R$ %.2f\n",total);
  }
  else
    if(X==5){
        total=Y*1.5;
    printf("Total: R$ %.2f\n",total);
  }

   return 0;
}

