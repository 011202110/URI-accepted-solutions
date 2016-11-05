#include<stdio.h>
int main()
{
     int a=2;


    printf("%d\n",a);
    int i,n;
    scanf("%d",&n);
    for(i=0;i<1000;i++){
            a=a+n;
            if(a>10000)
                break;
    printf("%d\n",a);


    }
    return 0;
}

