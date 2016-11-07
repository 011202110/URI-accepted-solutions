#include <bits/stdc++.h>
using namespace std;


int ar1[1002], ar2[1002];

int main()
{
	int n, b, x, i, j;
	bool p;

	while(cin >> n >> b && n && b)
	{
		memset(ar2, 0, sizeof ar2);
		p = true;

		for (i = 0; i < b; ++i)
			cin >> ar1[i];

		for (i = 0; i < b; ++i)
			for (j = 0; j < b; ++j)
				ar2[abs(ar1[i] - ar1[j])] = 1;

		for (i = 0; i <=n; ++i)
			if(ar2[i] == 0)
				p = false;

		printf(p ? "Y\n" : "N\n");
	}

	return 0;
}
