#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,i,k,j,l;
    string a;
    cin>> n >> i >> k;
    l = min(n,min(i,k));
    if(n==l && (n != i && n!=k))cout<<"Otavio\n";
    else if(i==l && (n != i && i!=k))cout<<"Bruno\n";
    else if(k==l && (k != i && n!=k))cout<<"Ian\n";
    else cout<<"Empate\n";


    return 0 ;
}
