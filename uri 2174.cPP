#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,j,l;
    string a;
    cin>> n;
    set<string>ar;
    while(n--){
        cin >> a;
        ar.insert(a);
    }
    printf("Falta(m) %d pomekon(s).\n",151-ar.size());
    ar.clear();
    return 0 ;
}
