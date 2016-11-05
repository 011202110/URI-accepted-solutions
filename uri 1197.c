#include<stdio.h>

int main()
{
    int a,b,s=0;

    while(scanf("%d %d",&a,&b)==2){
        s=a*(b*2);
        printf("%d\n",s);

    }
    return 0;
}
