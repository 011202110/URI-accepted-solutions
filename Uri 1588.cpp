#include<bits/stdc++.h>
using namespace std;
#define ZERO(x) memset(x, 0, sizeof(x))

typedef struct{
    char name[101] ;
    int t_p  ,t_w ,t_g  ,pos ;
}team;
team team_records[1001];

bool cmp(team x,team y){
    if(x.t_p != y.t_p)
        return x.t_p > y.t_p;
    if(x.t_w != y.t_w)
        return x.t_w > y.t_w;
    if(x.t_g != y.t_g)
        return x.t_g > y.t_g;
    return x.pos < y.pos ;
}

int position(int si, string s){
    for(int i = 0; i<si ;i++)
    if(team_records[i].name == s)
        return i;
    return -1;
}


int main()
{
    freopen("in.txt","r",stdin);

    int n;
    cin >> n;
    while(n--)
    {
        int k,l,g_a,g_b;
        string  t_n2 , t_name1 , t_name2;
        char t_n1[101];

        cin >> k >> l;
        getchar();
		ZERO(team_records);

        for(int i = 0; i < k ; i++){
        scanf(" %[^\n]",team_records[i].name);
        }

        for(int i = 0; i < l ; i++){

        cin >> g_a >> t_name1 >> g_b >> t_name2;

        int t1,t2;
        t1 = position(k,t_name1);
        t2 = position(k,t_name2);

         if(g_a > g_b){
            team_records[t1].t_p += 3;
            team_records[t1].t_w++;
         }else if(g_a < g_b)
         {
             team_records[t2].t_p += 3;
             team_records[t2].t_w++;
         }else{
             team_records[t1].t_p += 1;
             team_records[t2].t_p += 1;
         }
         team_records[t1].t_g += g_a;
         team_records[t2].t_g += g_b;
        }
      stable_sort(team_records,team_records+k,cmp);

      for(int j = 0; j < k ;j++)
      cout << team_records[j].name << endl;

    }
    return 0;
}
