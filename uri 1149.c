#include<stdio.h>

int main()
{
    int a,b,i,s=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<10000;i++){
    if(b<=0){
         scanf("%d",&b);
    }
    else{
        continue;
    }
    }
    for(i=a;i<a+b;i++){
        s=s+i;
    }
    printf("%d\n",s);
    return 0;
}


