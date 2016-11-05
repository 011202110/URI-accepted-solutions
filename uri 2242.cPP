/*                                                 CODEMAN
                                                ARIF KHAN NIHAR
                                           Uri 2242 - Huaauhahhuahau
                                              date -> 1/11/2016

                                            */
#include<bits/stdc++.h>
using namespace std;
bool check_vowel(char ch){
    switch(ch){
        case 'a': return true;
        break;
        case 'e': return true;
        break;
        case 'i': return true;
        break;
        case 'o': return true;
        break;
        case 'u': return true;
        break;
        default : return false;
    }
}
int main(){
      string s,s1,s2;
      cin>>s;
      for(int i = 0;i<s.size();i++){
        if(check_vowel(s[i]))
            s1 += s[i];
      }
      s2 = s1;
      reverse(s2.begin(),s2.end());
      if(s1 == s2)
      cout<<"S"<<endl;
      else
         cout<<"N"<<endl;
    return 0;
}
