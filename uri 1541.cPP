#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,n,a,b,result;
    while((cin >> n) && n!=0){
        cin >>a;
        cin >> b;

        i = ((n*a)*100)/b;
         result = pow(i,.5) ;
        cout <<result<< "\n";

    }
    return 0;
}

