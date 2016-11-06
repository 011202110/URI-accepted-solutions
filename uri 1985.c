#include<stdio.h>

int main()
{
    int a,b,n,i;
    float sum = 0.0,k;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);

        if(a==1001){
            k = (b* 1.50);
        }
        else if(a==1002){
            k = (b* 2.50);
        }
        else if(a== 1003){
            k = (b* 3.50);
        }
        else if(a== 1004){
            k = (b* 4.50);
        }
        else if(a== 1005){
            k = (b* 5.50);
        }
        sum = sum + k;
    }

    printf("%.2f\n",sum);

    return 0;
}
