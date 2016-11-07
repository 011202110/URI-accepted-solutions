/*                                                 CODEMAN
                                                ARIF KHAN NIHAR
                                             Uri 2310 - Volleyball
                                              date -> 3/11/2016

                                            */
#include<bits/stdc++.h>
using namespace std;

int main(){
    freopen("in.txt","r",stdin);
    int n;
        double s,b,a,s1,b1,a1,t_s=0,t_b=0,t_s1=0,k=0,t_b1=0,k1=0;
        float s_ans,b_ans,a_ans;
        string name;
         cin>>n;
         while(n--){
            cin>>name>>s>>b>>a;
            cin>>s1>>b1>>a1;
                t_s  += s;
                t_s1 += s1;
                    t_b += b;
                    t_b1 += b1;
                    k += a;
                    k1 += a1;

         }
         s_ans = (t_s1*100)/t_s;
         b_ans = (t_b1*100)/t_b;
         a_ans = (k1*100)/k;
         cout<<fixed<<setprecision(2)<<"Pontos de Saque: "<<s_ans<<" %."<<endl;
         cout<<fixed<<setprecision(2)<<"Pontos de Bloqueio: "<<b_ans<<" %."<<endl;
         cout<<fixed<<setprecision(2)<<"Pontos de Ataque: "<<a_ans<<" %."<<endl;

    return 0;
}


