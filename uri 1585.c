#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    while(a--){
        scanf("%d %d",&b,&c);
        printf("%d cm2\n",(b*c)/2);
    }
    return 0;
}
