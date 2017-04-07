#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n;
    cin >> n;
    cout << ((n == 0)? 'E' : (n < 36)? 'D' : (n < 61)? 'C' : (n < 86)? 'B' : 'A') << endl;
    return 0;
}
