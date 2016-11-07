#include <bits/stdc++.h>

using namespace std;

struct ch{
	int l,f;
};
bool cmp(ch a, ch b){
	if(a.f == b.f) return a.l>b.l ;
	return a.f < b.f ;
}

 map<string, int>map,mapa;

int main()
{
	int m, n, v, s,i;
	string w;
	ch ar[200];
	bool b = true ;

	while(getline(cin,w)){
		if(!b) cout<<endl;
		b = false;
		memset(ar,0,sizeof(ar));
		for(int i =0 ;i<200;i++)
		ar[i].l = i ;
		for(int i =0 ;i<w.size();i++)
		ar[w[i]].f++;

		stable_sort(ar,ar+200,cmp);

		for(int i =0 ;i<200;i++)
		if(ar[i].f!=0)
		cout << ar[i].l << " " <<ar[i].f <<endl;
	}

	return 0;
}
