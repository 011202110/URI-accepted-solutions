#include<bits/stdc++.h>
using namespace std;

int main(){
    string s,s1;
    int n,k;
    cin >> n >> k;
    map < string , string > ans;
    while(n--){
        cin >> s >> s1;
        ans.insert(pair < string , string > (s,s1));
            }
            while(k--){
                cin >> s;
                s1 = s;
                if(ans.count(s) != 0)
                    cout << ans.find(s)->second << endl;
                else{
                    if(s[s.size()-1] == 'y' and (s[s.size()-2] != 'a' and s[s.size()-2] != 'e' and s[s.size()-2] != 'i' and s[s.size()-2] != 'o' and  s[s.size()-2] != 'u'))
                        s[s.size()-1] = 'i',s +="es";
                    else if(s[s.size()-1] == 'o' or (s[s.size()-1] == 's') or (s[s.size()-2] == 'c' and (s[s.size()-1] == 'h')) or (s[s.size()-2] == 's' and s[s.size()-1] == 'h') or (s[s.size()-1] == 'x'))
                        s += "es";
                    else
                        s += "s";
                    cout << s << endl;
                    ans.insert(pair<string,string>(s1,s));
                }
            }
    return 0;
}
