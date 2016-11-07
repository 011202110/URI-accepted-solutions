#include <bits/stdc++.h>
using namespace std;

long long powers[40];

int main() {
  ios_base::sync_with_stdio(false);cin.tie(NULL);
  for (int  i = 0; i < 40; ++i)
    powers[i] = 1LL << i;

  int n;
  while (cin >> n && n) {
   int  u = 0, r = 0, i = 0;
    int a, b, c;
    int x, y, z;
    while (n--) {
      cin >> a >> b >> c;
      x = y = z = 0;
      for (int j = 0; j < 40; ++j) {
        if (powers[j] == a)
          u++, x = 1;
        if (powers[j] == b)
          r++, y = 1;
        if (powers[j] == c)
          i++, z = 1;
      }
      if (a >= max(b, c) && x )
        u++;
      if (b >= max(a, c) && y )
        r++;
      if (c >= max(a, b) && z )
        i++;
    }

    if (u > max(r, i))
      cout << "Uilton" << endl;
     else  if (r > max(u, i))
      cout << "Rita" << endl;
    else  if (i > max(u, r))
      cout << "Ingred" << endl;
     else
     cout << "URI" << endl;

  }
  return 0;
}
