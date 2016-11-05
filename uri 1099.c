#include<stdio.h>

int main(){
    int x,y,N,i,j,x1,y1,sum;

    scanf("%d",&N);

   for(j=0;j<N;j++){
        scanf("%d %d",&x1,&y1);
        if(x1>y1 || x1==y1){
            x=y1,y=x1;
        }
        else if(x1<y1){
            x=x1,y=y1;
        }

     sum=0;
    for(i=x+1;i<y;i++){
        if(i%2!=0){
            sum=sum+i;}
           }
          if(sum==0){
                    printf("0\n");}
                else{
                    printf("%d\n",sum);}

        }
    return 0;
}

