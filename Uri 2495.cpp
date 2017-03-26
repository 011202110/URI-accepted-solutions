#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int n,k,l,res = 0;
     while(cin >> n){
        int ans[100010];
        memset(ans,0,sizeof ans);
        l = n;
        n--;
        while(n--){
            cin >> k;
            ans[k] = 1;
        }
        for(int i = 1 ; i <= l ;i++){
            if(ans[i] == 0) {
                res = i ;
                break;
            }
        }
        cout << res << endl;
     }
    return 0;
}
