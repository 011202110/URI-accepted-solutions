#include <bits/stdc++.h>
using namespace std;
int main(){

    int n,i=0;
    while(cin >> n && n!=0){
    int a=0,b=1,fibonacci = 1;
    while(n--){
    fibonacci = a+b;
    a  = b;
    b = fibonacci ;
    }
    cout << fibonacci <<endl;
    }

    return 0;
}
