#include <bits/stdc++.h>
using namespace std;

int main()
{
int i,j=0,k,l,m,n;
while(cin>>n && n){
	i = l = k = m = 0;
	j++;
	i = n/50;
	k = (n - i*50)/10;
	l = (n - (i*50+k*10))/5;
	m = (n - (i*50+k*10+l*5))/1;

	cout<<"Teste "<<j<<"\n"<<i <<" "<<k<<" "<<l <<" "<<m<<endl<<endl;
}
   return 0 ;
}
