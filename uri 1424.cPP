#include <bits/stdc++.h>
using namespace std;
map<int , vector<int> >serize;
int main ()
{
	int n,i,k,j,l,p,m;
    while(cin >> n >> m){
    	serize.clear();
    	for(i=0;i<n;i++){
    		cin >> p;
    		serize[p].push_back(i);
    	}

    	for(i=0;i<m;i++){
    		cin >> k >> l ;
    		if(serize[l].size() < k)
    		cout << "0" <<endl ;
    		else
    		cout << serize[l][k-1] + 1 <<endl;
    	}

	}
	return 0 ;
}
