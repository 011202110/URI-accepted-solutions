#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int p,b1=0,b2=0,b3=0,b4=0,a,sum=0,i;
	string st;
	cin >> p>>a;;
	b2=p;
	while(a--){
		cin >> st;
		if(st=="fechou"){
			b1++;b2 = b2+2 ;
		}else{
			b1++;
		}


	}
			cout <<b2-b1<<endl;


	return 0;
}
