#include<stdio.h>
#define N 5
int main(){
    int a,b[N],i,count=0;
    scanf("%d",&a);
 for(i=0;i<5;i++)
{
        scanf("%d",&b[i]);
        if(a == b[i]){
            count++;
        }

    }
    if(count!=0)
        printf("%d\n",count);
    else
        printf("0\n");
    return 0;
}
