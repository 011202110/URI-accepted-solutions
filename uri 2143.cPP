#include <iostream>
using namespace std;

int main() {
int n;

while(cin >> n && n!=0){
	int t=n,y;
	while(t--){
		cin >> y ;
		if(y%2!=0)
		cout<<y+(y-1)<<"\n";
		else
			cout<<y+(y-2)<<"\n";
	}
}
	return 0;
}
