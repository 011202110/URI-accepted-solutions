#include<stdio.h>

int main(){
    int x,y,i,j,x1,y1,sum;

        scanf("%d %d",&x1,&y1);
        if(x1>y1 || x1==y1){
            x=y1,y=x1;
        }
        else if(x1<y1){
            x=x1,y=y1;
        }

     sum=0;
    for(i=x;i<=y;i++){
        if(i%13!=0){
            sum=sum+i;
            }
    }
    printf("%d\n",sum);
    return 0;
}

