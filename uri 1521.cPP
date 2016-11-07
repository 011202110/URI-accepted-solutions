#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,i,j,k;
  while(cin >> n && n)
	{
       int cl[n];
       for(i=1;i<=n;i++)
       cin >> cl[i];

       cin >> k;
      while(cl[k] != k)
       k = cl[k];

       cout << k << endl;
	}

	return 0;
}
