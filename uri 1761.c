#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,t,angel,result;
    double pi=3.141592654;
           while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF){
                 angel=tan ( a * pi / 180.0 );
                 t=angel*b;
                 result=(t+c)*5;
                 printf("%.2lf\n",result);
           }

      return 0;
}

