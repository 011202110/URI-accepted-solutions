#include <iostream>
using namespace std;

int main() {
	int p,b1,b2,r,a,sum=0;
	cin >> p>>b1>>b2>>r>>a;
	sum = b1+b2 ;
	if(p==1)p=0;
	else p=1;

     if(p!=sum%2 && ((r==0 && a==0) || (r==1 && a==1)) )
  	        cout <<"Jogador 2 ganha!"<<endl;
  	 else  if(p==sum%2 && (r==1 && a==1))
  	        cout <<"Jogador 2 ganha!"<<endl;
     else
			cout <<"Jogador 1 ganha!"<<endl;

	return 0;
}
