#include <iostream>
using namespace std;

int main() {
	int a,b,c,d,e;
	cin >> a>>b>>c;

     if(a+b+c < 0)
  	        cout <<24 + (a+b+c)<<endl;
  	else if(a+b+c == 24)
			cout <<"0"<<endl;
    else if((a+b)<24)
  	        cout <<(a+b+c)<<endl;
	else if((((a+b)-24)+c) == 24)
			cout <<"0"<<endl;
	else if((a+b)>24)
	    	cout <<((a+b)-24)+c<<endl;


	return 0;
}
