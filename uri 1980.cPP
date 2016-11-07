
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int p,b1=0,b2=0,b3=0,b4=0,a,i;
	long long sum =1;
    double interior_angle,area;
	string st;
   while (cin >> st && st[0]!=48 ){
   	sum=1;b1=0;
   	for(i=0;st[i]!='\0';i++){
   		 b1++;
   	}
   		for(i=1;i<=b1;i++)sum*=i;
   	    cout << sum <<endl;
   }

	return 0;
}
