#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,t_v = 0;
    double percentage;
    int ar[10001];
    double p_v[10001];
    cin >> n;
    for(int i = 0; i < n ;i++){
        cin >> ar[i];
        t_v += ar[i];
    }
    sort(ar,ar+n);
    for(int i = 0; i < n ;i++){
        percentage = (ar[i]*100)/t_v;
        if(percentage >=45.0)
            return cout << 1 << endl,0;
        p_v[i] = percentage;
    }

    if(p_v[n-1]<40.0)
        return cout << 2 << endl , 0 ;

    for(int i = n-2 ; i>=0 ;i--){
        if((double)(p_v[n-1] - p_v[i] ) <= 10.0)
             return cout << 2 << endl , 0 ;
    }

    cout << 1 << endl;
    return 0;
}
