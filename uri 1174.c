#include<stdio.h>

int main()
{
    int i;
    float n;
    int arr[100];

    for(i=0;i<=99;i++){
            scanf("%f",&n);
            arr[i]=n;
            if(arr[i]<=10.0){
             printf("A[%d] = %.1f\n",i,n);
            }

    }
    return 0;
}


