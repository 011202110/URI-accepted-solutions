#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, at, ad, bt, bd, h, ra, rb;

	cin >> t;

	while(t--)
	{
		 cin >> at >> ad >> bt >> bd ;
		 cin >> h ;
		ra = rb = 0;

		while(true)
		{
			if(ra <= rb){
				h -= at;
				rb -= ra;
				ra = ad;

				if(h <= 0){
					printf("Andre\n");
					break;
				}
			}else{
				h -= bt;
				ra -= rb;
				rb = bd;

				if(h <= 0){
					printf("Beto\n");
					break;
				}
			}
		}
	}

	return 0;
}
