#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,i,n1,c=0,c1,c2,max,pos,bar[501],arr[250001],j;
cin >> n >> n1 ;
	max = pos = 0;
       for(i=1;i<=n*n1;i++){
       	cin >> arr[i];
       }
        for(i=1;i<=n;i++){
        	c=0;
        	for(j=i;j<=n1*n;j+=(n)){
        		    c += arr[j];
        	}

        	if(max<=c){
        		max = c;
        		pos = i;
        	}
	}
    cout << pos <<endl;

	return 0;
	}
