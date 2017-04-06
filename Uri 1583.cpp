#include<bits/stdc++.h>
using namespace std;

int d_x[] = {1,-1,0,0},
    d_y[] = {0,0,-1,1};

void result(vector<vector <int> > &ar,vector<vector <char> > &br, int x, int y){
    if(x < 0 or x>= br.size() or y < 0 or y >= br[0].size()) return ;
    if(ar[x][y] or br[x][y] == 'X') return ;

    ar[x][y] = 1;
    br[x][y] = 'T';
    for(int i = 0 ; i < 4 ; ++i)
         result(ar,br,x + d_x[i], y + d_y[i]);
}

int main()
{
    freopen("in.txt","r",stdin);
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,m;
    while(cin >> n >> m and (n+m) != 0){

        vector< vector<int> > ar(n,vector<int>(m));
        vector<vector <char> > br(n,vector<char>(m));

        for(int i = 0; i < n ; i++)
            for(int j = 0; j < m ; j++)
               cin >> br[i][j];

        for(int i = 0; i < n ; i++)
            for(int j = 0; j < m ; j++)
               if(!ar[i][j]  and  br[i][j] == 'T')
                 result(ar,br,i,j);

        for(int i = 0; i < n ; i++){
            for(int j = 0; j < m ; j++){
               cout << br[i][j] ;
                }
                cout << endl;
        }
        cout << endl;
    }
    return 0;
}
