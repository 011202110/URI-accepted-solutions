#include<bits/stdc++.h>
using namespace std;
//set operator gread
int opV(char op1){
    if(op1 == '+' or op1 == '-') return 1;
    else if(op1 == '*' or op1 == '/') return 2;
    else if(op1 == '^') return 3;
}
//check operator gread
bool opre(char op1,char op2){
    return (opV(op1) >= opV(op2)) ? true:false;
}
int main()
{
    //freopen("in.txt","r",stdin);
    int n;
    cin >> n;
    while(n--){
    //stack declar for operator menu ex(+,-,*,/,^ or spcal key (#,@,$))
    stack<char>op_s;
    string s1;
    string s;
    cin >> s;
    for(int i = 0; i<s.size();i++){
        //operand
        if( (s[i] >= 'A' and s[i] <= 'Z') or (s[i] >= 'a' and s[i] <= 'z') or (s[i] >= '0' and s[i] <= '9') )
             s1+=s[i];
    //operator
        else if((s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '^')){
                while( !op_s.empty() and opre(op_s.top(),s[i]) and op_s.top() != '('){
                    s1 += op_s.top();
                    op_s.pop();
                }
                op_s.push(s[i]);
            }else if((s[i] == ')')){
               while(!op_s.empty() and op_s.top() != '('){
                     s1 += op_s.top();
                     op_s.pop();
               }
               op_s.pop();
        }else if(s[i] == '('){
                 op_s.push(s[i]);
                 }
    }
    while(!op_s.empty()){
             s1 += op_s.top();
             op_s.pop();
    }
    cout << s1 << endl;
    }
    return 0;
}
