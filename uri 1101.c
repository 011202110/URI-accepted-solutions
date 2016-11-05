
#include<stdio.h>

int main(){
    int x,y,N,i,j,x1,y1,sum;

   for(j=0;j<1000000;j++){
        scanf("%d %d",&x1,&y1);

      if(x1<=0 || y1<=0){
            break;
        }
       else if(x1>y1 || x1==y1){
            x=y1,y=x1;
        }
       else if(x1<y1){
          x=x1,y=y1;
         }

     sum=0;
    for(i=x;i<=y;i++){
            sum=sum+i;
               printf("%d ",i);
             }
          if(sum>0){
                printf("Sum=%d\n",sum);}
   }
    return 0;
}
