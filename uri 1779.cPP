#include <bits/stdc++.h>
using namespace std;

int ar[1000010];

int main ()
{
	int n,k = 0, m,a,b,c,i;
	cin >> n ;

	while(n--)
	{
		cin >> m ;
		a = b = c = 0;

		for(i = 0;i < m ;i++)
		{
			cin >> ar[i] ;
			a = fmax(a, ar[i]);
		}

		for(i = 0;i < m ;i++)
		{
			if(ar[i] == a) b++;
			else b = 0;
			c = fmax(c, b);
		}

		printf("Caso #%d: %d\n", ++k, c);
	}

	return 0;
}
