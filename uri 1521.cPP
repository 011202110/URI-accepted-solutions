#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b)
{
	if(b == 0) return a;
	else return mdc(b, a % b);
}

int main(int argc, char const *argv[])
{
	int n, a, b, re , d ;

	while(cin >> n >> a >> b && (n || a || b))
	{
		  d = n/((a * b)/mdc(a, b)) ;
		  cout << (n/a) + (n/b) - d  << endl;
	}

	return 0;
}
