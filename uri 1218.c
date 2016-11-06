#include<stdio.h>

int main()
{
    int n,a,t,F,M,i=0;
    char str,e;
    while(scanf("%d",&n)!=EOF){
            if(i!=0) printf("\n");
            F=0,M=0,t=0;
            while(scanf("%d %c%c",&a,&str,&e)==3){
                if(a=='\0'){
                    break;
                }
    if(a==n){
        if(str=='F'){
            F++;
        }else{
            M++;
        }
        t++;
    }
    if(e=='\n') break;
            }
              i++;
    printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n",i,t,F,M);

}
return 0;

}

