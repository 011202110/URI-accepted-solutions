#include<stdio.h>

int main()
{
    int a,i;
    int pass=2002;
    for(i=0;i<1000000;i++){
        scanf("%d",&a);
        if(a==pass){
            printf("Acesso Permitido\n");
            break;
        }
         else{
            printf("Senha Invalida\n");
         }


    }
    return 0;

}


