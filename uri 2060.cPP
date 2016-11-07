#include <iostream>
using namespace std;

int main() {
	int p,b1=0,b2=0,b3=0,b4=0,a;
	cin >> p;
	while(p--){
		cin >> a;
		if(a%2==0)b1++;
		if(a%3==0)b2++;
		if(a%4==0)b3++;
		if(a%5==0)b4++;
	}


			cout <<b1<<" Multiplo(s) de 2"<<endl;
			cout <<b2<<" Multiplo(s) de 3"<<endl;
			cout <<b3<<" Multiplo(s) de 4"<<endl;
			cout <<b4<<" Multiplo(s) de 5"<<endl;


	return 0;
}
