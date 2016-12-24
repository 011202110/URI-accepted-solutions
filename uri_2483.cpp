#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    string s = "Feliz nata";
    cin >> n;
    for(int i = 1;i<n; i++)
         s+='a';
    cout << s << "l!"<<endl;

    return 0;
}


