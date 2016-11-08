/*                                      CODEMAN
                                    Arif Khan Nihar
                                    Uri 2311 - Diving
                                    date - 11/8/2016

                                    */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int i,j,n;
    float mul,ar_val,sum;
    multiset<float>val;
    string name;
    cin>>n;
    while(n--){
        cin>>name;
        sum = 0.0;
        scanf("%f",&mul);
        for(i = 0; i<7 ;i++){
                cin>>ar_val;
            val.insert(ar_val);
        }
        int  p = 0 ;
        for(multiset<float>::iterator it = val.begin(); it!=val.end();it++,p++){
            if(p != 0 and p != 6)
                sum += *it;
        }
        cout<<name;
        printf(" %.2f\n",sum*mul);
        val.clear();
    }
    return 0;
}
