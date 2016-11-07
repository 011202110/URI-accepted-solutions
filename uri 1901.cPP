#include <bits/stdc++.h>
using namespace std;

int main() {
int i,k,j,n,l;
while(cin>>n){

set<int>arif;
 vector<vector<int>>  gd(n, vector<int>(n));
for(i=0;i<n;i++)
  for(j=0;j<n;j++)
   cin >> gd[i][j];

   for(i=0;i<n*2;i++){
   	cin >> k >> l;
   	arif.insert(gd[k-1][l-1]);
   }
   cout << arif.size() <<endl;
}
	return 0;
}
