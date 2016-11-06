#include<stdio.h>

int gcd(int a, int b);
int main()
{
    int a,b,c,a1,b1,c1;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        if(b>a && a>=c){
            a1=b,b1=a,c1=c;
        }else if(b>=c && c>a){
            a1=b,b1=c,c1=a;
        }else if(c>a && a>=b){
            a1=c,b1=a,c1=b;
         }else if(c>=b && b>a){
            a1=c,b1=b,c1=a;
        }else{
            a1=a,b1=b,c1=c;
        }

        if((a1*a1)==((b1*b1)+(c1*c1))){
              if(gcd(gcd(a,b),c)==1)
            {
                printf("tripla pitagorica primitiva\n");
            }else{
                printf("tripla pitagorica\n");
            }
        }else{
            printf("tripla\n");
        }
    }
    return 0;
}

int gcd(int a,int b)
{
int tmp=0;
      while(b!=0){
      tmp=b;
      b=a%b;
      a=tmp;
      }
      return a ;
}


