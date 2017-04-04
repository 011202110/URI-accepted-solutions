#include<bits/stdc++.h>
using namespace std;
int c = 0,cr = 0;

string add_big_double_value(string fr,string se,int carry){

    string res="",check1 = "",check2 = "";

    int fr_l = fr.size(),
        se_l = se.size();

    if(fr_l < se_l) swap(fr,se);
            int len = fr.size(),
                se_len = se.size();

    if(cr)reverse(se.begin(),se.end());
    for(int i = se_len ; i < len ; i++) se += '0';
    if(cr)reverse(se.begin(),se.end());
    int digit = 0; c = carry;

    for(int i = len-1 ; i >= 0 ; i--){
            digit = (fr[i] - '0') + (se[i] - '0') + c;
            res += (digit > 9)? (digit - 10) + '0' : digit + '0' ;
            (digit > 9)? c = 1 : c = 0;
    }
    cr = 1;
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    long long cpf_n;
    long poi;
    int p1 = 0,p2 = 0,p = 0;
    bool b = false;
    string s,s1,input1="",input2="",cpf,se_res,point_str1 = "" ,point_str2 = "",dec_str;
    cin >> s >> s1;
    for(int i = 0; i < s.size() ;i++){
        if(((s[i] >= '0' and s[i] <= '9') or s[i] == '.') and cpf.size() < 11){
            if(b and s[i] == '.') {
                    cpf += s[i];
                    break;
            }
            cpf += s[i];
            if(b) p++;
            if(p>=2) {
                if(cpf.size() < 11) return cout << "cpf " << cpf << endl , 0;
                break;
            }
            if(s[i] == '.'){
                b = true;
            }
        }else if(((s[i] >= '0' and s[i] <= '9') or s[i] == '.') and cpf.size() >= 11){
                    if(b and s[i] == '.') break;
                    if(p >= 2)break;
                    if(b) p++;
                    (b)?(input1.size() < 2)? input1 += s[i] : point_str1 += s[i] : (s[i] != '.')? input1 += s[i] : input1 = input1;
                    if(s[i] == '.') b = true;
                }
            }

     b = false;
     p = 0;

    for(int i = 0; i < s1.size() ;i++){
       if((s1[i] >= '0' and s1[i] <= '9') or s1[i] == '.'){
                     if(b and s1[i] == '.') break;

                    (b)? point_str2 += s1[i] : (s1[i] != '.')? input2 += s1[i] : input2 = input2;

                    if(b) p++;
                    if(p >= 2)break;
                    if(s1[i] == '.') b = true;
                    }
    }
    if(point_str1.empty()) point_str1 = "00";if(point_str2.empty()) point_str2 = "00";
    se_res = add_big_double_value(point_str1,point_str2,c);
    dec_str = add_big_double_value(input1,input2,c);
    if(c) dec_str += '1';

    cout << "cpf " << cpf << endl << dec_str  <<   "."  << se_res << endl;
    return 0;
}
