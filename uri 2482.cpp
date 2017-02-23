#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int n,k;
    string s,s1;
    map<string,string>ans;
    cin >> n;
    cin.ignore(100,'\n');
    for(int i = 0; i < n ;i++)
    {
        getline(cin,s);
        getline(cin,s1);
        ans.insert(pair<string,string>(s,s1));
    }
    int i = 0;
    cin >> k;
    cin.ignore(100,'\n');
    while(i != k){
        getline(cin,s);
        if(i != 0) cout << endl;
        cout << s << endl;
        getline(cin,s1);
        cout << ans.find(s1)->second << endl;
        i++;
    }
    cout << endl;
    return 0;
}
