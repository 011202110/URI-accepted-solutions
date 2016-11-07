#include <iostream>
using namespace std;

int main() {
	int n,i,m;
	 while (cin >> n >> m && n != 0 & m!=0) {
          if(n<m){
            i = n-(m-n);
            cout << i <<endl;
          }else{
          	 i = m-(n-m);
            cout << i <<endl;
          }
}
	return 0;
}
