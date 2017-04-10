#include <bits/stdc++.h>
using namespace std;

struct ans{
    int a = 0;
    int b = 0;
}rec[1511];

bool cmp(const ans &x, const ans &y){
    return x.b > y.b;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
     int n ,m,k,l,ca = 0;

     while(cin >> k and k){
          for(int i = 0; i < k ;i++){
            cin >> rec[i].a >> rec[i].b;
          }
          stable_sort(rec,rec+k,cmp);

     cout << "Turma " << ++ca << endl;

       bool b = true;

     for( int i = 1 ;i < k ; i++){
            if(b) cout << rec[i-1].a << " " ;

            if(rec[i].b != rec[i-1].b and b) {
            	cout << endl ;
                    b = false;
             }
             rec[i-1].a = 0, rec[i-1].b = 0;
      }

      if(b) cout << rec[k-1].a << " " << endl;
      rec[k].a = 0, rec[k].b = 0;

      cout << endl ;
     }
    return 0;
}

