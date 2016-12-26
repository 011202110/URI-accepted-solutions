#include<bits/stdc++.h>
using namespace std;

struct match_records{
            string t_name;
            string t_name_uppercase;
            int g,s,b;

    }team_records[1001];

bool cmp(const match_records &x, const match_records &y)
{
  if(x.g != y.g)
     return x.g > y.g;
  if (x.s != y.s)
    return x.s > y.s;
  if(x.b != y.b)
    return x.b > y.b;

    return x.t_name_uppercase < y.t_name_uppercase;
}

int main()
{
    int n;
    scanf(" %d ", &n);

       for(int i = 0; i < n ;  i++) {
           char s[101];
         scanf("%s", s) ;
         scanf(" %d %d %d", &team_records[i].g,&team_records[i].s,&team_records[i].b);
         team_records[i].t_name = team_records[i].t_name_uppercase = s;
         transform(team_records[i].t_name.begin(),team_records[i].t_name.end(),
                  team_records[i].t_name_uppercase.begin(),:: toupper);
       }
      stable_sort(team_records,team_records+n,cmp);

      for(int i = 0; i < n ; i++) {
        cout << team_records[i].t_name << " " << team_records[i].g << " " << team_records[i].s << " " << team_records[i].b <<endl;
      }


    return 0;
}
