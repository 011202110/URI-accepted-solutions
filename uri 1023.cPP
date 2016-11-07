#include <bits/stdc++.h>
using namespace std;
map<int,int>ar;

int main() {
int n,r,y,x,i,j,c=1;
double xy,yx;
bool t = false;
while(cin >> n && n){
	if(t)cout<<endl;
	t = true ;

	xy = yx = 0;
	ar.clear();
	while(n--){
		cin >> x >> y;
		xy += x ;
		yx += y ;

		if(ar[y/x] != 0) ar[y/x] += x ;
		else ar[y/x] = x ;
	}
	j = 0;
	printf("Cidade# %d:\n",c);
	for(map<int , int>::iterator iter = ar.begin() ; iter != ar.end() ;iter++){
		cout << iter->second <<"-"<<iter->first;
		if(j < ar.size()-1)
		cout <<" ";
		j++ ;
	}
	    cout << endl;
        cout << "Consumo medio: ";
        printf("%.2f m3.\n",floor((yx / xy) * 100) / 100);

	c++;
}
	return 0;
}
