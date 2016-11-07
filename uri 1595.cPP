#include <bits/stdc++.h>
using namespace std;

int cmp(const void * a,const void * b){ return (*(int*)a - *(int*)b);}
int main() {
int ar[100001];
int t,n,s,c,r;
double res;
cin >> n ;
while(n--){
	res = 0.0 ;
	cin >>s>>c>>r;
	for(int i = 0; i<s  ; i++) cin >>ar[i];
	qsort(ar,s,sizeof(int),cmp);
   if(c!=0)
	for(int i = 0; i<c;i++) res += 1.0/((double)ar[i]*1.0 + (double)r*1.0);

	for(int i = c; i<s;i++) res += 1.0/((double)ar[i]*1.0);

	printf("%.2lf\n",res);
}
	return 0;
}
