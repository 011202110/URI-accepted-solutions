#include<stdio.h>
int main()
{
    int i,j=0,n;
    float avg,k=0;

    while(n){
    scanf("%d",&n);
    if(n<0)
       break;
    j+=n;
    k++;
    }
    avg=j/k;
    printf("%.2f\n",avg);

    return 0;
}


