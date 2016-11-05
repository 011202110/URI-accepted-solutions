#include<stdio.h>

int main()
{
    int x,y,i;
    for(i=0;i<100000;i++){
        scanf("%d %d",&x,&y);
        if(x==0 && y==0){
            break;
        }else{
            printf("%d\n",x+y);
        }
    }
    return 0;
}
