#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {
      double a, b, c, d, re;
	char ar[50],dr;
	int br[10];
	int i,j,l,n;
	cin >> n;
		while(n--){

			cin >> a >> b >> c >> d;

			re = ((d-b)/(c-a));

			sprintf(ar, "%lf", re);

         for(i=0;i<50;i++){
         	if(ar[i]!='.'){
         		cout << ar[i];
         	}
         	else{
         		cout<<",";
         		 for(int k = i + 1; k < i + 3; k++)
                    cout << ar[k];
                cout << "\n";
                break;
         	}
         }
		}



	return 0;
}
