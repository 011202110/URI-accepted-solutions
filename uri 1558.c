#include<stdio.h>
#define N 10000

int len=0;
void pre_gen(int arr[]);

int main()
{
    int n,i,ck;
    int arr[N+1] = {0};
    pre_gen(arr);

    while(scanf("%d",&n)!=EOF){

            if(n >= 0 && arr[n]==1)
                printf("YES\n");
            else
                printf("NO\n");
    }

    return 0;
}

void pre_gen(int arr[])
{
    int i,j,t;

        for(i=0;i*i<=N;i++){
            for(j=0;j*j<=N;j++){

                if( (i*i)+(j*j) <= N ){
                    t = (i*i)+(j*j);
                    arr[t] = 1;
                }

            }
        }
}

