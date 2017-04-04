#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,c,t_i,l,Ali=0,Bo=0,c_b;
    cin >> c >> t_i >> l;
    for(int i = 0; i < c-1 ; i++){
        cin >> c_b;
        n = abs(c_b - t_i);
        if(n <= l){
            (i&1)? Bo += n : Ali += n;
            t_i = c_b;
        }
    }
    cout << Ali << " " << Bo << endl;
    return 0;
}
