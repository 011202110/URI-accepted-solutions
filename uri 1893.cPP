#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b1,b2;
	cin >> b1 >>b2 ;
	if(b1>b2){
		if(b2>=0 && b2<3)
			cout <<"nova"<<endl;
				else if(b2>=3 && b2<97)
				  cout <<"minguante"<<endl;
				  	else if(b2>=97 && b2<101)
                    	cout <<"cheia"<<endl;
	}else{
		if(b2>=0 && b2<3)
			cout <<"nova"<<endl;
				else if(b2>=3 && b2<97)
                   cout <<"crescente"<<endl;
				  	else if(b2>=97 && b2<101)
                    	cout <<"cheia"<<endl;
	}


	return 0;
}
