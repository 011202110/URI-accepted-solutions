#include<bits/stdc++.h>
using namespace std;

struct record{
    string t_name;
    string t_name_upper;
    int g,sl,b;
}team_records[1001];

bool cmp(const record &x, const record &y)
{
    if(x.g != y.g)
        return x.g > y.g;
    if(x.sl != y.sl)
        return x.sl > y.sl;
    if(x.b != y.b)
        return x.b > y.b;

    return x.t_name < y.t_name_upper;
}

int main()
{
    //freopen("in.txt","r",stdin);
    map<string,int>g,sl,b;
    string s,s1;
    while(getline(cin,s)){
            for(int i = 1 ;i <= 3 ;i++)
            {
                 getline(cin,s1);
                 if(i == 1)
                    g[s1]++,sl.insert(pair<string,int>(s1,0)),b.insert(pair<string,int>(s1,0));
                 else if(i == 2)
                    sl[s1]++,g.insert(pair<string,int>(s1,0)),b.insert(pair<string,int>(s1,0));
                 else
                    b[s1]++,g.insert(pair<string,int>(s1,0)),sl.insert(pair<string,int>(s1,0));
            }
    }
          int i = 0;
         for(map<string,int>::iterator it = g.begin(),it1 = sl.begin(), it2 = b.begin() ; it != g.end() ; it++, it1++,it2++,i++){

            team_records[i].t_name = team_records[i].t_name_upper = it->first;
            transform(team_records[i].t_name.begin(),team_records[i].t_name.end(),team_records[i].t_name_upper.begin(),::toupper);
            team_records[i].g = it->second;
            team_records[i].sl = it1->second;
            team_records[i].b = it2->second;
         }
         stable_sort(team_records,team_records+i,cmp);
         int k = i;
         cout << "Quadro de Medalhas" << endl;
         for( i = 0; i<k; i++)
            cout << team_records[i].t_name << " " << team_records[i].g << " " <<  team_records[i].sl << " "  << team_records[i].b << endl;
    return 0;
}
