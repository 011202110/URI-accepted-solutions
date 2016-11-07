#include <cstdio>
#include <algorithm>

using namespace std;

int s[25], f[25];

int lookup(int n, int x)
{
	for (int i = 0; i < n; ++i)
		if(s[i] == f[x])
			return i;

	return -1;
}

int main(int argc, char const *argv[])
{
	int n, i, c, tmp,a,b;

	while(scanf("%d", &n) == 1)
	{
		for (i = 0; i < n; ++i)
			scanf("%d", &s[i]);

		for (i = 0; i < n; ++i)
			scanf("%d", &f[i]);

		i = 0; c = 0;

		while(i < n)
		{
			while(s[i] != f[i])
			{
				tmp = lookup(n, i);

				a = s[tmp - 1];
				s[tmp - 1]  = s[tmp] ;
				s[tmp] = a;
				c++;
			}
			i++;
		}

		printf("%d\n", c);
	}

	return 0;
}
