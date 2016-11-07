#include<bits/stdc++.h>
using namespace std;

int main() {

  int n;
  while (cin >> n) {
    vector<string> g(n);
    for (auto &i : g) cin >> i;
    sort(g.begin(), g.end());
    long long ans = 0;
    for (int i = 1; i < n; ++i) {
      for (int j = 0; j < g[i].size(); ++j) {
        if (g[i][j] == g[i - 1][j]) ans++;
        else break;
      }
    }
    cout << ans << endl;
  }

  return 0;
}
