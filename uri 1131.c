#include<stdio.h>

int main()
{
    int x, y, op, i;
    int inter = 0;
    int gremio = 0;
    int grenal = 0;
    int empate = 0;

    for(i=0;i<100000;i++){
        scanf("%d %d",&x,&y);

        if(x>y){
            inter++;
        }
        else if(x<y){
            gremio++;
        }
        else if(x==y){
            empate++;
        }
        grenal++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d",&op);
        if(op==2){
            break;
        }
    }
    printf("%d grenais\n",grenal);
    printf("Inter:%d\n",inter);
    printf("Gremio:%d\n",gremio);
    printf("Empates:%d\n",empate);

    if(inter > gremio)
        printf("Inter venceu mais\n");
    if(inter < gremio)
        printf("Gremio venceu mais\n");
    if(inter == gremio)
       printf("Nao houve vencedor\n");

    return 0;
}

