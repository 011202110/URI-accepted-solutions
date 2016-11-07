#include <bits/stdc++.h>
using namespace std;

int main() {
int y,n,t,k,l;
 cin >> n ;
while(n--){

		cin >> t >> k >> l;

		if(l == 1 && k !=0 && t!=0 && t>9 && k>9)cout<<t<<":"<<k<<" - A porta abriu!\n";
		else if(l == 1 && k ==0 && t!=0 && t>9)cout<<t<<":00"<<" - A porta abriu!\n";
		else if(l == 1 && k !=0 && t==0 && k > 9)cout<<"00:"<<k<<" - A porta abriu!\n";
		else if(l == 1 && k ==0 && t==0)cout<<"00:00"<<" - A porta abriu!\n";
		else if(l == 1 && k !=0 && t!=0 && t<10 && k<10) cout<<"0"<<t<<":0"<<k<<" - A porta abriu!\n";
		else if(l == 1 && k !=0 && t!=0 && t>9 && k<10) cout<<t<<":0"<<k<<" - A porta abriu!\n";
		else if(l == 1 && k !=0 && t!=0 && t<10 && k>9) cout<<"0"<<t<<":"<<k<<" - A porta abriu!\n";
	    else if(l == 1 && k ==0 && t!=0 && t<10)cout<<"0"<<t<<":00"<<" - A porta abriu!\n";
		else if(l == 1 && k !=0 && t==0 && k < 10)cout<<"00:0"<<k<<" - A porta abriu!\n";

		if(l == 0 && k !=0 && t!=0 && t>9 && k>9)cout<<t<<":"<<k<<" - A porta fechou!\n";
		else if(l == 0 && k ==0 && t!=0 && t>9)cout<<t<<":00"<<" - A porta fechou!\n";
		else if(l == 0 && k !=0 && t==0 && k>9)cout<<"00:"<<k<<" - A porta fechou!\n";
		else if(l == 0 && k ==0 && t==0)cout<<"00:00"<<" - A porta fechou!\n";
		else if(l == 0 && k !=0 && t!=0 && t<10 && k<10) cout<<"0"<<t<<":0"<<k<<" - A porta fechou!\n";
		else if(l == 0 && k !=0 && t!=0 && t>9 && k<10) cout<<t<<":0"<<k<<" - A porta fechou!\n";
		else if(l == 0 && k !=0 && t!=0 && t<10 && k>9) cout<<"0"<<t<<":"<<k<<" - A porta fechou!\n";
		else if(l == 0 && k ==0 && t!=0 && t<10)cout<<"0"<<t<<":00"<<" - A porta fechou!\n";
		else if(l == 0 && k !=0 && t==0 && k < 10)cout<<"00:0"<<k<<" - A porta fechou!\n";

}
	return 0;
}
