#include <bits/stdc++.h>
using namespace std;

int main() {
  string s,as,bs,cs;
  int a,b,c;
  size_t p ;
  while(getline(cin,s)){
  	p = s.find('+');
  	as = s.substr(0,p);
  	bs = s.substr(p+1);
  	p = bs.find('=');
  	cs = bs.substr(p+1);
  	bs = bs.substr(0,p);
  	reverse(begin(as),end(as));a = stoi(as);
  	reverse(begin(bs),end(bs));b = stoi(bs);
  	reverse(begin(cs),end(cs));c = stoi(cs);

  	if(a+b == c)
  	cout <<"True\n";
  	else
  	cout <<"False\n";

  }

	return 0;
}
