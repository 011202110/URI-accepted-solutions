#include<stdio.h>
int main ()
    {
        int a[1000];
        int n,i,lowest,posi;

         scanf("%d",&n);

        lowest=a[0];
        posi=0;

        for(i=0;i<n;i++){
                 scanf("%d",&a[i]);
            if(lowest>a[i]){
                lowest=a[i];
                posi=i;
            }
         }
        printf("Menor valor: %d\nPosicao: %d\n",lowest,posi);
        return 0;
    }

