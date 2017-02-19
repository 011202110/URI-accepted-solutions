/*                                     Codeman
                                   Arif Khan Nihar
                                Uri 2353 - Just in Time

                             */
#include<bits/stdc++.h>
using namespace std;

long primeCheck(long x){

    if(x%2 == 0) x -= 1;
    for(int i = x; i >= 2 ;i-= 2){
            bool b = true;
            for(int j = 3 ; j <=(i+1)/2; j += 2){
                if( i%j == 0 or i%2 == 0) {
                        b = false;
                        break;
                }
            }
            if(b) return i;
    }
}
int main()
{
    long n;
    cin >> n;
    cout << ((n == 2)? 2 : primeCheck(n)) << endl;

    return 0;
}
