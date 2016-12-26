#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1000000007

vector<lli>v;

lli add(){
    lli an = 1;
     int p  = 1001;
     v.push_back(1);
        while( p > 0 ) {
            an = (an * 26)% mod ;
            v.push_back( an );
             p-- ;
        }
}
int main()
{
    add();

   string s,s1;
   lli a,b,sum = 0;
    while(cin >> s){
            sum = b = 0;
    int t  = s.size() - 1;
    for(int i = 0; i < s.size() ;i++ , t-- ){
        sum += ((s[i]-'A') * v[t]) % mod;
        sum %= mod;
    }
    cout << sum << endl;
    }
    return 0;
}


