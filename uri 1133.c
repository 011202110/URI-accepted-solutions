#include<stdio.h>

int main(){
    int x,y,i,j,x1,y1;

        scanf("%d %d",&x1,&y1);
        if(x1>y1 || x1==y1){
            x=y1,y=x1;
        }
        else if(x1<y1){
            x=x1,y=y1;
        }
    for(i=x+1;i<y;i++){
        if(i%5==2 || i%5==3){
             printf("%d\n",i);
            }
    }

    return 0;
}


