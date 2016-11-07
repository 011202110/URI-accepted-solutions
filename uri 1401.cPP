#include <bits/stdc++.h>
using namespace std;

int main() {
int n;
string st;
cin >> n;
while(n--){
   cin >> st ;
   sort(st.begin(),st.end());
do{
  cout << st <<endl;
}while (next_permutation(st.begin(), st.end()));
cout <<endl;
}
  return 0;
}
