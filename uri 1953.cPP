#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,i,n1,c,c1,c2;
string st;
while(cin>>n){
	c=c1=c2=0;
	while(n--){
		cin >> n1 >> st;
		if(st == "EPR")
		c++;
		else if(st == "EHD")
		c1++;
		else
		c2++;
	}
	cout<<"EPR: "<<c<<endl;
	cout<<"EHD: "<<c1<<endl;
	cout<<"INTRUSOS: "<<c2<<endl;
}
	return 0;
	}
