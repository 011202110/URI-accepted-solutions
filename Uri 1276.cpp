#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    int ans[27];
    string s;
    while(getline(cin,s)){
        memset(ans,0,sizeof(ans));
        set<char>res;
        int p = 0,p1=1;
        for(int i = 0; i<s.size() ;i++){
            ans[s[i] - 'a'] = 1;
            res.insert(s[i]);
        }
        char ch = '#';
        for(int i = 0; i<26 ;i++){
            if(ans[i]){
                if(ch == '#') ch = (char)(i+'a');
            }else{
                if(res.count(ch) != 0){
                    if((ch - 'a') - i == 1)
                         (p)?cout << ", " << ch << ":" << ch : cout << ch << ":" << ch;
                    else
                         (p)?cout << ", " << ch << ":" << (char) ((i-1)+'a') : cout << ch << ":" << (char)((i-1)+'a') ;
                p=1;
                }
                ch = '#';
            }
        }
        if(ch != '#')(p)?cout << ", " << ch << ":" << 'z' :cout << ch << ":" << 'z' ;
        cout << endl;
    }
    return 0;
}
