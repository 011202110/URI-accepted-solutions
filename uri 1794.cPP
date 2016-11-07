#include <bits/stdc++.h>
using namespace std;

int main() {
int n,a,b,ab,ba;
cin >> n >>a >>b;
cin >>ab>>ba;
if((a<=n && b>=n) && (ab<=n && ba>=n))
cout<<"possivel"<<endl;
else
cout<<"impossivel"<<endl;
  return 0;
}
