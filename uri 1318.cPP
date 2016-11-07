#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	int n,i,j,l,fake,m;
	int si[190],clon[10000];
	char st[51] ;
	 while (cin >> n >> m && n != 0 && m != 0) {
    	int sum = 0;

        for(i=0;i<=n;i++) clon[i] =0;


        while(m--){
        	cin >> fake ;
           if(clon[fake]==1)sum++;
           clon[fake]++;
        }

        cout <<sum <<endl;
}
	return 0;
}
