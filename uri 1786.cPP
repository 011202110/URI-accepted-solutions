#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {
	int a,b1,b2,n,i,j,m,c,d;
	char ar[10];
	while(scanf("%s",&ar)==1){
		m=9;
		n=1;
        b1=0,b2=0;
		for(i=0;i<9;i++){
			b1 += ((ar[i]-'0')*n);
			b2 += ((ar[i]-'0')*m);
		m--;
		n++;
		}

   	if(b1 % 11 == 10) b1 = 0;
		else b1 %= 11;
		if(b2 % 11 == 10) b2 = 0;
		else b2 %= 11;

		for(j=0;j<9;j++){
			cout <<ar[j];
			if(j==2 || j==5){
				cout<<".";
			}
		}
		cout <<"-"<<b1<<b2<<endl;

	}
	return 0;
}
