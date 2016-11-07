#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

char abdar[101][101];

int main(int argc, char const *argv[])
{
	int n, m, a, b, i, j, k, l;

	while(cin >> n >> m && (n || m)){

		getchar();

		for (i = 0; i < n; ++i)
		cin >> abdar[i];

		cin >> a>> b;

		for (i = 0; i < n; ++i)
		{
			for (k = 0; k < (a/n); ++k)
			{
				for (j = 0; j < m; ++j)
				{
					for (l = 0; l < (b/m); ++l)
					{
						printf("%c", abdar[i][j]);
					}
				}
				printf("\n");
			}
		}

		printf("\n");
	}

	return 0;
}
