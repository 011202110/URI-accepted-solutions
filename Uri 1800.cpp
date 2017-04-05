#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int week_office,two_days_office,k;
    cin >> week_office >> two_days_office;
    set<int>two_days_office_s;
    for(int i = 0; i < two_days_office ;i++){
         cin >> k;
         two_days_office_s.insert(k);
    }
    while(week_office--){
        cin >> k;
        cout << ((two_days_office_s.count(k))? 0 : 1 ) << endl;
        two_days_office_s.insert(k);
    }
    return 0;
}


