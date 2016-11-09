/*                                                  CODEMAN
                                                 Arif Khan Nihar
                                            Uri 2221- Pomekons Battle
                                                 date - 10/9/2016

                                                 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    int c,b,a,d,d_v,g_v,m_l1,m_l2,a2,d2;
    cin>>c;
    while(c--){
            d_v = g_v = 0;
        scanf("%d %d %d %d %d %d %d",&b,&a,&d,&m_l1,&a2,&d2,&m_l2);
        if((m_l1 & 1) == 0) d_v = b ;
         if((m_l2 & 1) == 0) g_v = b ;

         d_v += (a+d)/2;
         g_v += (a2+d2)/2;

         if(d_v == g_v)
            cout<<"Empate\n";
         else{
            if(d_v > g_v)
                cout<<"Dabriel\n";
            else
                cout<<"Guarte\n";
         }
    }
    return 0;
}
