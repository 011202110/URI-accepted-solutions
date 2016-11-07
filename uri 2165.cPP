#include <bits/stdc++.h>
using namespace std;

#define M 1.25506
int main() {
	string a;
	getline(cin,a);
	if(a.size()<=140)cout<<"TWEET\n";
	else cout<<"MUTE\n";
	return 0;
}
