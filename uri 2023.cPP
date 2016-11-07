#include <bits/stdc++.h>
using namespace std;

string convert(string s2) {
  for (auto &i : s2) i = tolower(i);
  return s2;
}

int main() {
  string st,s3;
  while (getline(cin, st))
    if (convert(st) > convert(s3))
      s3 = st;
  cout << s3 << endl;
  return 0;
}
