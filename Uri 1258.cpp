#include<bits/stdc++.h>
using namespace std;

typedef struct{
    string s1;
    string s2;
    char ch ;
}love;
love recods[1001];

bool cmp(love x, love y)
{
	if(x.s2 == y.s2){
		if(x.ch == y.ch) return x.s1 < y.s1;
		else return x.ch > y.ch;
	}else{
		return x.s2 < y.s2;
	}
}

int main()
{
    freopen("in.txt","r",stdin);
    string a,a1;
    int n,ca=0;
    char ch;
    while(cin >> n and n != 0){
            cin.ignore(100,'\n');

   if(ca != 0) cout << endl;

   for(int i = 0; i < n ;i++)
    {
        getline(cin,a);
        getline(cin,a1);

        recods[i].s1 = a;
        size_t p = a1.find(' ');
        recods[i].ch = a1[a1.size()-1];
        a1 = a1.substr(0,p);
        recods[i].s2  = a1;

    }
    stable_sort(recods,recods+n,cmp);

    for(int j = 0; j < n; j++)
          cout << recods[j].s2 << " " << recods[j].ch << " " << recods[j].s1 << endl;

            ca++;

    }
    return 0;
}
