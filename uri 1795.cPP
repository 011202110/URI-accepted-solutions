#include <bits/stdc++.h>
using namespace std;

int main(){
int i=0, j,l,l1,p;
long long int mul;
cin>> p;
if(p!=0){
for(i=0;i<=p;i++){
	mul = 1;
	for(j=0;j<p;j++){
		mul *= 3;
	}
}
cout << mul << endl;
}else{
	cout << "1" << endl;
}

	return 0;
}
