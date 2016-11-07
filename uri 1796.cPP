#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {
	int a,b1=0,b2=0,n,i,j,m,c,d;
	char ar[10];
	int br[10];
scanf("%d",&a);

		for(i=0;i<a;i++){
		cin >> n;
		if(n==0){
		b1++;
		}else{
			b2++;
		}
	}
	if(b1>b2)cout<<"Y"<<endl;
	else cout<<"N"<<endl;

	return 0;
}
