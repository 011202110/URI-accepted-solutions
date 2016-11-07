#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,m,df[1001],i;

	string a;
	while(cin>>n){
		for(i=0;i<n;i++){
	            cin >> df[i];
		}
		sort(df,df+i);
		for(i=0;i<n;i++){
	            if(df[i]<10)
	                cout<<"000"<<df[i]<<endl;
	               else if(df[i]<100)
	                cout<<"00"<<df[i]<<endl;
	               else if(df[i]<1000)
	                  cout<<"0"<<df[i]<<endl;
	                  else cout<< df[i]<<endl;
		}
    }

	return 0;
}
