#include <bits/stdc++.h>
using namespace std;
int n = 600010 ;
long ant = 0;
 vector<long>v;
 int prime[300000];
 int nprime;
 int mark[1000002];
 //calculate prime number
void SieveOfEratosthenes(int n1)
{
int i,j,limit = sqrt(n*1.) + 2;
int l = 1;
mark[1] = 1;
for(i = 4; i<=n ;i+=2) mark[i] = 1;
prime[nprime++] = 2;

for(i = 3; l < 11 ;i+=2){
	if(!mark[i]){
		prime[nprime++] = i;
		if(i <= limit){
			for(j = i*i; j<= n ;j+=i*2){
				mark[j] = 1;
			}
		}
		if( i >= n1 ){
		 ant += i,l++;
		  }
	}
  }
}

int main() {
	int w;
	double v1,d;
	long n , x;
    int ans = 0,an = 0;
     cin >> w ;
    SieveOfEratosthenes(w);
    v1 = ceil(60000000/ant);
    d = floor(v1/24);
    cout<< ant << " km/h"<<endl;
    cout<< v1 << " h / "<< d << " d"<<endl;
	return 0;
}
