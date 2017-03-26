#include<bits/stdc++.h>
using namespace std;

 int main()
 {
     int t = 0;
     string name1, name2;
     multimap < string , int> criminal,vectim;
     map < string ,int > ans;
     while(cin >> name1 >> name2){
         criminal.insert(pair<string , int>(name1,0));
         vectim.insert(pair<string , int>(name2,0));
     }
     for(multimap < string , int > :: iterator it = criminal.begin(); it != criminal.end(); it++){
     	string as = it->first;
     	int t = 1;
        if(vectim.count(as) == 0){
        	ans[as]++;
        }
     }

     cout << "HALL OF MURDERERS" << endl;
         for(map < string , int > ::iterator it2 = ans.begin(); it2 != ans.end();it2++){
         cout << it2->first << " " << it2->second << endl;
     }
     return 0;
 }
