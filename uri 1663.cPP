#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, at, ad, bt, bd, h, ra, rb;

	        int arr[1000005];
        int inv[1000005];
        int n, cnt;

        while(cin >> n) {
            if(n == 0) {
                break;
            }

            cnt = 0;

            for (int i = 1; i <= n; i++) {
               cin >> arr[i] ;
                inv[arr[i]] = i;
            }

            for (int i = 1; i <= n; i++) {
                if(arr[i] == inv[i]) {
                    cnt++;
                }
            }

            if(cnt == n) cout << "ambiguous\n";
            else  cout <<"not ambiguous\n";

        }
   return 0;
}
