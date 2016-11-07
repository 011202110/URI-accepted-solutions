#include <iostream>
#include<string.h>
using namespace std;

int main() {
	int i,j,k,n,z=0;
	string test;
  while (cin >> test) {
    if (test == "caw") {
      cin >> test;
      cout << z << endl;
      z = 0;
}else{
	if(test[0]=='-' && test[1]=='-' && test[2]=='*')k= 1;
	else if(test[0]=='-' && test[1]=='*' && test[2]=='-') k=2;
	else if(test[0]=='-' && test[1]=='*' && test[2]=='*')k= 3;
	else if(test[0]=='*' && test[1]=='-' && test[2]=='-')k= 4;
	else if(test[0]=='*' && test[1]=='-' && test[2]=='*')k= 5;
	else if(test[0]=='*' && test[1]=='*' && test[2]=='-')k= 6;
	else if(test[0]=='*' && test[1]=='*' && test[2]=='*')k= 7;
	else k= 8;
			z +=k;
		}
	}
	return 0;
}
