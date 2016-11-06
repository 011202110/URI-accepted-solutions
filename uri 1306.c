#include<stdio.h>

int main()
{
    int r,n,c=1,i,flag;

    while(scanf("%d %d",&r,&n) && r!=0 && n!=0){
        flag=0;
        if(n>=r){
             printf("Case %d: 0\n",c);
        }else{
            for(i=1;i<27;i++){
                    if(n*(i+1)>=r){
                    printf("Case %d: %d\n",c,i);
                    flag=1;
                    break;
                    }
            }
        if(flag==0){
             printf("Case %d: impossible\n",c);
        }
        }
        c++;
    }
    return 0;
}

