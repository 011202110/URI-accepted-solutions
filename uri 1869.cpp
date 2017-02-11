#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    unsigned long long int n;
    string ar = "0123456789ABCDEFGHIJKLMNOPQRSTUV",ans;
    while(cin >> n ){
            if(n == 0) {
                    cout << 0 << endl;
            break;
            }else{
            while(n != 0){
            ans += ar[n%32];
              n /= 32;
            }
            reverse(ans.begin(),ans.end());
            cout << ans << endl;
            ans.clear();
            }
    }
    return 0;
}
