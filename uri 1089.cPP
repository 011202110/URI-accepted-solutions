#include <bits/stdc++.h>
using namespace std;

int main ()
{
	int n,i,k,j,l;
	while(cin >> n && n){
			int loop[n];
		k = 0;
		for(i=0;i<n;i++)
			cin >> loop[i];

			if((loop[0] > loop[n-1] && loop[0] > loop[1]) || (loop[0] < loop[n-1] && loop[0] < loop[1]))
			k++;
			if((loop[n-1] > loop[n-2] && loop[n-1] > loop[0]) || (loop[n-1] < loop[n-2] && loop[n-1] < loop[0]))
		    k++;

		    for(i=1;i<n-1;i++)
		    if((loop[i] > loop[i-1] && loop[i] > loop[i+1]) || loop[i] < loop[i-1] && loop[i] < loop[i+1])
		    k++;

		    cout << k << endl ;
	}
	return 0 ;
}
