#include<bits/stdc++.h>
using namespace std;
typedef long double LD;

template <typename T1, typename T2>
struct less_first {
    typedef pair<T1, T2> type;
    bool operator ()(type const& a, type const& b) const {
        return a.first > b.first;
    }
};

int main()
{
    freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,c = 0;
    while(cin >> n){
        map<LD, int>ans;
        LD a;
        for(int i = 0; i < 10 ;i++) {
                cin >> a;
         while(ans.count(a) != 0){
            a -= (LD)1e-15;
         }
        ans.insert(pair<LD,int>(a,i));
        }
     vector<pair<LD, int> > ans1(ans.begin(), ans.end());
     sort(ans1.begin(), ans1.end(), less_first<LD, int>());
     vector<pair <LD, int> > :: iterator it = ans1.begin();

     int i = 0;
     cout << "Caso " << ++c << ": ";
     for( vector<pair <LD, int> > :: iterator it = ans1.begin() ; it != ans1.end() ;it++,i++){
        if(i == n) break;
        cout << it->second ;
     }
        cout << endl;
    }
    return 0;
}
