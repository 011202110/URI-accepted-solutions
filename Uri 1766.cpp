#include<bits/stdc++.h>
using namespace std;

typedef struct{
    string name;
    string n_u_c;
    int weight, age ;
    float height;
}love;
love recods[1001];

bool cmp(love x, love y)
{
	if(x.weight == y.weight)
            if(x.age == y.age)
              if(x.height == y.height)
                 if(x.n_u_c != y.n_u_c)
                     return x.n_u_c < y.n_u_c;
                 else
                   return x.n_u_c > y.n_u_c;
               else
                  return x.height > y.height;
             else
                return x.age > y.age;
           else
             return x.weight < y.weight ;
}

int main()
{
    freopen("in.txt","r",stdin);
    string a,a1;
    int n,ca=0,l1,l2;

    cin >> n;
    cin.ignore(100,'\n');

    for(int j = 1 ;j <= n ;j++){
        cin >> l1 >> l2;

   for(int i = 0; i < l1 ;i++)
    {
      cin >> recods[i].name >> recods[i].weight >> recods[i].age >> recods[i].height;
      recods[i].n_u_c = recods[i].name;
      transform(recods[i].name.begin(),recods[i].name.end(),recods[i].n_u_c.begin(),:: toupper);
    }
    stable_sort(recods,recods+l1,cmp);
    reverse(recods,recods+l1);

    printf("CENARIO {%d}\n", j);

    for(int i = 0; i < l2; i++){
         printf("%d - ", i+1);
         cout << recods[i].name << endl;
    }
}
    return 0;
}

