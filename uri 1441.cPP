#include <iostream>
#include<vector>

using namespace std;

vector<int> ar;

int result(int n){
	ar.push_back(n);
	if( n != 1 ){
	if( n%2 == 0 ) result( n / 2 );
	else result((3 * n) + 1 );
	}
}

int main() {
	int i=0,j,k,l,n,max;
	while(cin >> n && n){
		result(n);

		max=0;
     for( i = 0 ; i < ar.size() ; i++ ){
     if( max < ar.at(i) )
		 max = ar.at(i) ;
     }
			cout<<max<<endl;
			ar.clear();
}
	return 0;
}
