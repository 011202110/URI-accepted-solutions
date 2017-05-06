#include<bits/stdc++.h>
using namespace std;

int main()
{
 ios_base::sync_with_stdio(false);cin.tie(NULL);
    string s;
    char ch;
    while(scanf("%c",&ch)!=EOF){
        s+=ch;
    }
    stringstream str1(s);
    vector < string > variable;
    string take;
    while (str1 >> take)
    variable.push_back(take);
    int len = 0;
    string sd;
    for(int i = 0; i<variable.size() ; i++){
            bool b = true;
            sd = variable[i];
            string st = (i!=0)? variable[i-1] : sd;
            if(len+sd.size() > 80 and sd != "<br>" and sd[sd.size()-1] != '.'){
                  cout << endl, len = 0;
            }else if(len+sd.size()+1 > 80 and sd != "<br>" and sd[sd.size()-1] == '.'){
                  cout << endl, len = 0;
            }
        if(st[st.size()-1] == '.' and len > 75 and sd != "<br>"){
            cout << endl, len = 0;
        }
        if(variable[i] == "<br>"){
                cout << endl;
            len = 0,b=false;
        }
        else if(variable[i] == "<hr>")
            if(len!=0) cout << endl << "--------------------------------------------------------------------------------\n",len = 0,b=false;
            else cout << "--------------------------------------------------------------------------------\n",len = 0,b=false;
        else  (i==0 or len == 0)?  cout << variable[i] : cout << " " << variable[i];
        if(b)len += sd.size()+1;
     }
     if(sd != "<br>")cout << endl;
    return 0;
}
