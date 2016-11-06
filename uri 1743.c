#include<stdio.h>

int main()
{
    int x1,x2,x3,x4,x5,y1,y2,y3,y4,y5;

    scanf("%d %d %d %d %d",&x1,&x2,&x3,&x4,&x5);
     scanf("%d %d %d %d %d",&y1,&y2,&y3,&y4,&y5);

     if(x1!=y1 && x2!=y2 && x3!=y3 && x4!=y4 && x5!=y5){
        printf("Y\n");
     }else{
         printf("N\n");
     }
     return 0;
}
