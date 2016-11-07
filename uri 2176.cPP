#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,j,l;
    string a;
    cin>> a;
    for(int p = 0; p<a.size();p++){
    	if(a[p]=='1')k++;
    }
    if(k%2==0) cout<<a<<'0'<<endl;
    else  cout<<a<<'1'<<endl;
    return 0 ;
}
