#include<stdio.h>

int main()
{
    int a,i,A=0,G=0,D=0;

    for(i=0;i<1000000;i++){
        scanf("%d",&a);
        if(a==1){
            A++;
        }
       else if(a==2){
        G++;
       }
      else if(a==3){
        D++;
      }
        else if(a==4){
            break;
        }
        else{

        }
    }
     printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",A,G,D);
    return 0;
}

