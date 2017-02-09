#include<bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    while(cin>>n and n != "-1"){
    	int t = 0;
        if(n  == "0") cout << "0" << endl;
        else {
        	if(n.size()>1){
            for(int i = n.size()-1; i>=0;i--){
            	if(n[i] != '0'){
            		t = i;
            		break;
            	}
            }
            for(int i = 0; i<n.size();i++){
            	if(i<t)
            	cout << n[i];
            	else if(i == t) {
            		if (n[i] != '1' ) cout << n[i]-'1';
            		if(n[i] == '1' and i != 0) cout << "0";
            	}
            	else cout << '9';
                }
        	}else{
        		cout << n[0]-'1';
        	}
        	   cout << endl;
        }

        n.clear();
    }
    return 0;
}
