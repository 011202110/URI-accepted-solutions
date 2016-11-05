#include <stdio.h>
#include <math.h>

int main(){
    int n, teste,i;
    long int p;

    scanf("%d", &n);

    while(n--){
            teste = 0;
            scanf("%ld", &p);
             if(p<=2){
            if(p == 0){
                 printf("Not Prime\n");
                 continue;
            }

            if(p == 1){
                 printf("Not Prime\n");
                 continue;
            }

            if(p == 2){
                 printf("Prime\n");
                 continue;
            }
             }
           else{
            for(i = 2; i < sqrt(p)+1; i++){
                    if(p%i == 0) teste++;
                    if(teste == 2) break;
            }

            if(teste >= 1) printf("Not Prime\n");
            else printf("Prime\n");
    }
    }
    return 0;
}

