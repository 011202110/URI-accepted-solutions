#include <bits/stdc++.h>
using namespace std;

int main() {
string a;
list<char>s1;
list<char>::iterator it;
while(cin >> a){
	s1.clear();
	it = s1.begin();

	for(int i = 0; i<a.size();i++){
		  if(a[i] == ']') {
        it = s1.end();
      } else if(a[i] == '[') {
        it = s1.begin();
      }else {
        s1.insert(it, a[i]);
      }

}
    for(it = s1.begin(); it != s1.end(); it++)
      cout << *it;
    cout << '\n';
}
	return 0;
}
