#include <iostream>
using namespace std;

int main() {
int i,j,k=0,z=0,n,mid;

while(cin >> n){
mid = n/2;
z = n/3;
k = n-z;
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		 if(i==mid && j==mid)
		cout<<"4";
		else if((i>=z && i<k) && (j>=z && j<k))
		cout<<"1";
		else if(j == n-i-1)
		cout <<"3";
		else if(i==j)
		cout <<"2";
		else
		cout<<"0";

	}
	cout <<"\n";
}
cout << endl ;
}
	return 0;
}
