#include<bits/stdc++.h>
using namespace std;

int d_x[] = {1,1,2,2,-1,-1,-2,-2},
    d_y[] = {2,-2,1,-1,2,-2,1,-1};

int main()
{
    freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int idx = 0,n;
    char ch;
    while(cin >> n >> ch and n ){
        int res = 0;
        vector<vector < int> > ans(8, vector<int>(8));
        int x = n - 1,
            y = ch - 'a';
        for(int i = 0; i < 8 ; i++){
            cin >>  n >> ch;
            ans[n - 1][ch - 'a'] = 1;
        }

        for(int i = 0; i < 8 ; i++){
                int x1 = x + d_x[i],
                    y1 = y + d_y[i];
        if(x1 >= 0 and x1 < 8 and y1 >= 0 and y1 < 8){
            int x2 = x1 + 1,
                y2 = y1 - 1,
                k = 1;

            if(x2 >= 0 and x2 < 8 and y2 >= 0 and y2 < 8 and ans[x2][y2]) k = 0;
            y2 = y1 + 1;
            if(x2 >= 0 and x2 < 8 and y2 >= 0 and y2 < 8 and ans[x2][y2]) k = 0;
            if(k) res++;
        }
    }
        cout << "Caso de Teste #" << ++idx << ": " << res << " movimento(s)." << endl;
    }
    return 0;
}
