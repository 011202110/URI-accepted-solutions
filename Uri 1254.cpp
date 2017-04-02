#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    string s,s1;
    while(cin >> s >> s1){
            cin.ignore();
        set<char>let;

        bool b = false;
        string input,word,word1;

        getline(cin,input);
        transform(s.begin(),s.end(),s.begin(), ::tolower);

        for(int i = 0; i<s.size() ;i++) let.insert(s[i]);

        for(int i = 0; i < input.size() ;i++){
            if(isalpha(input[i]) or (input[i] >= '0' and input[i] <= '9')){

             word += input[i];
             word1 = word;
             transform(word1.begin(),word1.end(),word1.begin(), ::tolower);

                if(word1 == s and b){
                cout << s1;
                word.clear();
                word1.clear();
                 }

                if(word.size() == 1){
                    if(let.count(tolower(input[i])) == 0) {
                        cout << input[i];
                        word1.clear();
                        word.clear();
                    }
                 }
            }else if(input[i] == ' ' and word1 == s and b){
                     cout << s1 << " ";
                     word.clear();
            }else if(input[i] == '>' and word1 == s and b){
                     cout << s1 << ">";
                     word.clear();
                     b = false;
            }else if(input[i] == '<'){
                     b = true;
                     (word.empty())? cout << '<' : cout << word << "<";
                     word.clear();
            }else if(input[i] == '>'){
                     (word.empty())?cout << '>' : cout << word << ">";
                     word.clear();
                     b = false;
                }else {
                    (word.empty())? cout << input[i] : cout << word << input[i];
                     word.clear();
            }
        }
        if(!word.empty()) cout << word << endl;
        else cout << endl;
    }
    return 0;
}
