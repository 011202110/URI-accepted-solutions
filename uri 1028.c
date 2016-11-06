#include<stdio.h>

int gcd(int a,int b);
int main()
{
    int a,b,c,n;
     scanf("%d",&n);

    while(n--){
            scanf("%d %d",&a,&b);
            printf("%d\n",gcd(a,b));

    }
    return 0;
}

int gcd(int a,int b)
{
int temp=0;
while(b!=0){
    temp=a%b;
    a=b;
    b=temp;
}
return a;
}

