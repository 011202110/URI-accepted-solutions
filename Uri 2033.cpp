#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    int n,i,m;
    double m_a,i_r;
    while( cin >> m_a >> i_r >> m){
        double s,c,d;
        s = (m_a*i_r)*m;
        c =  m_a* (powl((1+i_r),m)) - m_a;
        d = abs(s-c);
        cout << "DIFERENCA DE VALOR = " << fixed << setprecision(2) << d << endl;
        cout << "JUROS SIMPLES = " << fixed << setprecision(2) << s << endl;
        cout << "JUROS COMPOSTO = " << fixed << setprecision(2) << c << endl;
    }

    return 0;
}
