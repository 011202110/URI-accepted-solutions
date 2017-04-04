#include<bits/stdc++.h>
using namespace std;

struct mode{
    string name;
    int problem_num;
}recod[1001];

bool cmp(const mode &a, const mode &b){
    if(a.problem_num != b.problem_num)
        return a.problem_num < b.problem_num ;
    return a.name > b.name;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,case_n = 0,t = 0;
    while(cin >> n){
            if(t != 0) cout << endl;
    for(int i = 0; i < n ;i++){
        cin >> recod[i].name >> recod[i].problem_num;
    }
    stable_sort(recod,recod+n,cmp);
    cout << "Instancia " << ++case_n << endl << recod[0].name << endl;
    for(int i = 0; i < n ;i++)
       recod[i].name.clear(),recod[i].problem_num = 0;
    t=1;
    }
    cout << endl;
    return 0;
}
