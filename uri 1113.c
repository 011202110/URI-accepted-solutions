#include<stdio.h>

int main()
{
     int x,y,i;
    for(i=0;i<1000000000;i++){
     scanf("%d %d",&x,&y);

       if (x==y){
    break;
       }
   else if(x<y){
        printf("Crescente\n");
    }
    else if(x>y){
        printf("Decrescente\n");
        x==y ;
    }

}
    return 0;
}

