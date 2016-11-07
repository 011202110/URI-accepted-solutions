#include <bits/stdc++.h>
#define for(i, n) for(int i = 0; i < (n); ++i)

using namespace std;

typedef struct
{
	bool check;
	int time;
}music;

music playlist[101];

int main(int argc, char const *argv[])
{
	int m, k, t, c, x;

	while(cin >>m >> k)
	{
		t = c = 0;

		for(i, m)
		{
			cin >> (playlist[i].time);
			playlist[i].check = false;
		}

		for(i, k)
		{
			cin >> x;
			if(c < m){
				t += playlist[x-1].time;
				if(!playlist[x-1].check){
					c++;
					playlist[x-1].check = true;
				}
			}
		}

		if(c < m) printf("-1\n");
		else printf("%d\n", t);
	}

	return 0;
}
