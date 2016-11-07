#include <iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {
	int a,b1,b2,n,i,j,m,c,d;
	char ar[15];
	while(scanf("%s",&ar)==1){
		m=9;n=1;b1=0;b2=0;
		for(i=0;i<11;i++){
			if(i!=3 && i!=7){
			b1 += ((ar[i]-'0')*n);
			b2 += ((ar[i]-'0')*m);
		m--;n++;
		}
	}

   	if(b1 % 11 == 10) b1 = 0;
		else b1 %= 11;
		if(b2 % 11 == 10) b2 = 0;
		else b2 %= 11;

        b1 = b1+48;
        b2 = b2+48;

		if(ar[12]==b1 && ar[13]==b2)
		cout <<"CPF valido\n";
		else
		cout <<"CPF invalido\n";
	}

	return 0;
}
