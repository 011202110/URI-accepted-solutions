#include <bits/stdc++.h>
using namespace std;

#define sc1(n) cin >> n
#define sc2(n,n1) cin >> n >> n1
#define zero(x) memset(x, 0, sizeof(x))
#define for(i,n)  for(int i=1;i<=(n);i++)

int main (){
	int n,val1,q,r,i,j,s;


   	  sc1(n);

    while(n--){
        sc2(q,r);

        int ar[q+1];
        zero(ar);
      int  max=0;


            for(j,r){
            	sc1(s);
            	ar[s]++;
            	if(ar[max]<ar[s])
            	max = s ;
            }
                if(ar[max] > (double) r/2)
                cout << max << endl;
                else
                  cout << "-1" << endl;

    }
	return 0;
}
