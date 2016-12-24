#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    multiset<string>m_s;
    multiset<string>::iterator it;
    string s;
    char ch ;
    int n,p_i = 0,n_i = 0;
    cin >> n;
    while(n--){
        cin >> ch >> s;
        (ch == '+')? p_i++ : n_i++;
        m_s.insert(s);
    }
    for(it = m_s.begin(); it != m_s.end(); it++)
         cout << *it << endl;
    printf("Se comportaram: %d | Nao se comportaram: %d\n",p_i,n_i);

    return 0;
}
