#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,n,j,k,l=0,pos=0;
	string ad,ab;
	cin >>ad>>n;
	for(j=1;j<=5;j++){
		cin >> ab;
		k =  0;
		for(i=0;ad[i]!='\0';i++){
			if(ad[i] == ab[i]) k++;
		}
		if(k>l) {
			l = k;
		  pos  =  j	;
		}

}
	if(n>ad.size())cout<<1<<endl<<ad.size()<<endl;
	else {
		  if(ad.size()-l<n) cout << pos <<endl<<ad.size()-l<<endl;
	      else cout <<"-1\n";
	}

	return 0;
}
