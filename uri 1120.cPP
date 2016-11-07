#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main() {
	int i,k,n,j=0,m=0,t,l;
	char sd[200],s1[200];
	string st;

	while(cin >> n >> st && n!= 0 && st!= "0"){
		k=0,l=0,t=0,j=0;

		    while(st[j] - 48 == 0 || st[j] - 48 == n  ) {
		    	j++;
		    	}

		for(i=j;st[i]!='\0';i++){
		    m = st[i];
		   if(m-48 != n ){
		    s1[t++] = st[i];
		   }
		}
		s1[t] = '\0';
		if(strlen(s1)!=0)
	    cout<< s1 <<endl;
	    else
		cout <<"0"<< endl;
	}
	return 0;
}
