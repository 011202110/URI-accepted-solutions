#include <iostream>
#include<stdio.h>
#include<algorithm>

using namespace std;

int main() {
	int a,b,n,m=0,i,j=0,k=0;
	int ar[101];
	cin >> a >> b;
	for(i=0;i<b;i++) cin >> ar[i] ;

	for(i=0;i<b-1;i++){
		if(ar[i]<ar[i+1]){
		if(ar[i+1] - ar[i] <= a ){
		m=1;
		}
		else {
		m=0;
		break;
		}
		}else{
		if( ar[i] - ar[i+1] <= a ){
		m=1;
		}
		else {
		m=0;
		break;
		}
    	}
	}
	if(m!=0)cout << "YOU WIN"<<endl;
	else cout << "GAME OVER" << endl;

	return 0;
}
