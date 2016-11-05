#include<stdio.h>

int main()
{
    int a,b,c;
    char d;
    scanf("%d",&a);
    while(a--){
        scanf("%d %c %d",&b,&d,&c);
        if(b==c){
            printf("%d\n",b*c);
        }else{
        if(d>=60 && d<=90){
            printf("%d\n",c-b);
        }else{
            printf("%d\n",c+b);
         }
       }
    }
    return 0;
}
