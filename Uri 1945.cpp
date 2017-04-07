#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    string s;
    map<string , int>ans;
    int res;
    while(getline(cin,s)){

    stringstream str1(s);
    vector<string> variable;
    string take;
    while (str1 >> take)
    variable.push_back(take);

        int l = variable.size();

        if(l == 3){
        string ds = variable[2];
        if(isdigit(ds[0])){
            stringstream str2(variable[2]);
            int p = 0;
            str2 >> p;
            ans.insert(pair<string , int>(variable[0],p));
            res = p;
        }else{
            ans.insert(pair<string , int>(variable[0],ans.find(variable[2])->second));
            res = ans.find(variable[2])->second;
        }
    }else{
       ans.insert(pair<string , int>(variable[0],(ans.find(variable[2])->second) + ans.find(variable[4])->second));
       res = ans.find(variable[2])->second + ans.find(variable[4])->second ;
      }
    }
    cout << res << endl;
    return 0;
}
