#include<stdio.h>

int main()
{
    int i,n;
    float x,y;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%f %f",&x,&y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else{
            //result=x/y;
            printf("%.1f\n",x/y);
        }
    }
    return 0;
}

