#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,mi = -100;

    cin >> a >> b >> c;
      a/=2,b/=3,c/=5;

    mi = min(a,min(b,c));

    cout << mi << endl;

    return 0;
}
