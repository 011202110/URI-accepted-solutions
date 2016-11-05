/*                                                 CODEMAN
                                                ARIF KHAN NIHAR
                                           Uri 2235 - Walking in Time
                                              date -> 1/11/2016

                                            */
#include<bits/stdc++.h>
using namespace std;

int main(){
        int f,v,p;
          cin>>f>>v>>p;
        if(f == p || v == p || f == v || f+v == p || v+p == f || f+p == v)
            cout<<"S"<<endl;
        else
            cout<<"N"<<endl;

    return 0;
}

