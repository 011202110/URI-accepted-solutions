#include <bits/stdc++.h>
using namespace std;

const long double eps = 1e-12;
const long double c = sqrt((long double)3.0) / 4.0;

int main() {

  int a;
  while (cin >> a) {
    long double l = a;
    long double area = l * l;
    unsigned long long sides = 3;
    while (l > eps) {
      l /= 3.0;
      area += (l * l) * sides;
      sides *= 4;
    }
    cout << fixed << setprecision(2) << area  * c << endl;
  }

  return 0;
}
