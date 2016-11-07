#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	int i,n,k,j,m=0,t;
	char st[10001],sd[10001];
	cin >> n;

    cin.getline(st,0);
	while(n--){
		k=0,m=0,t=0;
	cin.getline(st,10001);
		for(i=0;st[i]!='\0';i++)
			k++;

		for(i=0;i<k;i++){
		   if((st[i]>='A' && st[i]<='Z') || (st[i]>='a'&& st[i]<='z'))
				  st[i]=st[i]+3;
		}
	for(i=k-1;i>=0;i--){
		sd[t]=st[i];
		t++;
	}
	    sd[t]='\0';
		m = k/2;
		for(j=m;j<k;j++){
			  sd[j]=sd[j]-1;
		}
		cout << sd <<endl;
	}
	return 0;
}
