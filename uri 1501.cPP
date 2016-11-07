#include <bits/stdc++.h>
using namespace std;

const int MN  = (1 << 20) + 20;
double ll[MN];

int main() {
  int n, b,i,c,r;
  ll[0] = 0;
  for (int i = 1; i < MN; ++i)
    ll[i] = ll[i - 1] + log(i);

  while (cin >> n >> b) {
    int p,  e;
    int bb = b;
    r = 0;
    for (int i = 2; i <= b; ++i) {
      if ((b % i) == 0) {
        c = 0;
        while ((b % i) == 0) {
           c++;
          b /= i;
        }
           p = i;
           e = c;
      }
    }

    int t = 0;
    int a = n;
    while (a > 0) {
      a /= p;
      t += a;
    }
     r =  round(floor(ll[n] / log(bb)) + 1) ;
    cout << t / e  << " " << r << endl;
  }
  return 0;
}
