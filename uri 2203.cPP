/*                                                  CODEMAN
                                                 Arif Khan Nihar
                                               Uri 2203- Crowstorm
                                                 date - 10/9/2016

                                                 */
#include<bits/stdc++.h>
#define di 1.50
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    double d,t_r,t_x,t_y,x1,x2,y1,y2,v,r1,r2;
    while(scanf("%lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&v,&r1,&r2)!=EOF){

       t_x = (x2 - x1) * (x2 - x1);
       t_y = (y2 - y1) * (y2 - y1);

       d = sqrt(t_x + t_y);
       d += v * di;

       t_r = r1 + r2 ;

       cout<<((d<=t_r)? "Y\n" : "N\n");
    }
    return 0;
}

