#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	int n,i,j,l,k,m;
	int si[51];
	char st[51] ;
	cin >> n;
	 while(n-- )
    {
    	int sum = 0;

        cin >> m;

        for(i=0;i<m;i++)cin >> si[i];

        for(i=0;i<m;i++){
            cin >>st[i];
        }

        for(i=0;i<m;i++){
            if(st[i] == 'S' && si[i]<3)
                sum ++;
            if(st[i] == 'J' && si[i]>2)
                sum++;
        }

        cout <<sum <<endl;
}
	return 0;
}
