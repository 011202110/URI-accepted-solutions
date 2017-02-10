#include<bits/stdc++.h>
using namespace std;

struct shopping_recods1{
    string product_name1;
    string t_u_n1;
    double p1;
    int quntity;

}per_person_recod1[1001];

bool cmp1(const shopping_recods1 &x , const shopping_recods1 &y){
    if(x.quntity != y.quntity)
        return x.quntity > y.quntity;
    if(x.p1 != y.p1)
        return x.p1 < y.p1;
    return x.t_u_n1 < y.t_u_n1;
}
int main()
{
    string s1,s2;
    double ret;
    int n,m;
    while(cin >> s2 >> n){

            for(int i = 0; i < n ;i++){
                    cin.ignore(100,'\n');
                    getline(cin,s1);
         per_person_recod1[i].product_name1 = per_person_recod1[i].t_u_n1 = s1;
        transform(per_person_recod1[i].product_name1.begin(),per_person_recod1[i].product_name1.end(),per_person_recod1[i].t_u_n1.begin(), :: toupper);
        cin >> ret >> m;
        per_person_recod1[i].p1 = ret;
        per_person_recod1[i].quntity = m;
            }
        stable_sort(per_person_recod1,per_person_recod1+n,cmp1);

        cout << "Lista de " << s2 << endl;
        for(int i = 0; i < n ;i++){
             cout << per_person_recod1[i].product_name1 << " - R$" <<fixed << setprecision(2) << per_person_recod1[i].p1 << endl;
             per_person_recod1[i].product_name1.clear();
             per_person_recod1[i].p1 = 0;
        }
        cout << endl;
    }
    return 0;
}
