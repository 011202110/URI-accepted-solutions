#include<stdio.h>

int main()
{
    int x,y,x1,y1;

    while(scanf("%d %d %d %d",&x,&y,&x1,&y1) && x!=0 &&y!=0 &&x1!=0 && y1!=0){
        if(x==x1 &&y==y1){
            printf("0\n");
        }else if( (x1-x) == -(y1-y) || -(x1-x)== -(y1-y) || -(x1-x) == (y1-y) || (x1-x) == (y1-y)){
          printf("1\n");
        }else if( x == x1 || y == y1 ){
            printf("1\n");
        }else{
              printf("2\n");
        }
    }
    return 0;
}

