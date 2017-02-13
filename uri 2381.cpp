/*                                     Codeman
                                   Arif Khan Nihar
                             Uri 2381 - Lista de Chamada

 C++11 .. only or C++14                                */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n,k;
    set<string>name;
    cin >> n >> k;
    while(n--){
        cin >> s;
        name.insert(s);
    }
    int j = 1;
    for(const auto& i:name){
        if(j==k)
            return cout << i << endl,0;
        j++;
    }
    return 0;
}
