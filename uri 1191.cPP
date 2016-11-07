#include <bits/stdc++.h>
using namespace std;
int c=0;
void fu(string prefix,string infix,int x,int y){
if(x<=y){
	c++;
	int pos = infix.find(prefix[c]);
	fu(prefix,infix,x,pos - 1);
	fu(prefix,infix,pos+1,y);
	cout << infix[pos];
  }
}

int main ()
{
	string a,b;
	while(cin >> a >> b){
		c = -1;
		fu(a,b,0,a.size()-1);
		cout<<endl;
	}

	return 0;
}
