/*                                     Codeman
                                   Arif Khan Nihar
                                 Uri 1785 - Kaprekar

                                 */
#include<bits/stdc++.h>
using namespace std;

// Highest number calculate
int highest_number_with_digits_of(int x1){
    int hi[4],i = 0;
    memset(hi,0,sizeof(hi));
    int tmp,res;
            while(x1 != 0){
            tmp = x1 % 10;
            x1 /= 10;
            hi[i] = tmp;

            i++;
        }
        sort(hi,hi+4);
        int e;
        for(int i = 0,j=3; i < 2 ;i++,j--){
            e = hi[j];
            hi[j] = hi[i];
            hi[i] = e;
        }

        res = (hi[0]*1000)+(hi[1]*100)+(hi[2]*10)+hi[3];
        return res;
}
//Lowest number calculate
int lowest_number_with_digits_of(int x2){
    int lo[4],i=0;
    memset(lo,0,sizeof(lo));
            int tmp,res;
            while(x2!=0){
            tmp = x2%10;
            x2 /= 10;
            lo[i] = tmp;
            i++;
        }
        sort(lo,lo+4);
        res = (lo[0]*1000)+(lo[1]*100)+(lo[2]*10)+lo[3];
        return res;
}

//ans counting
int krapekar(int x) {
   int cnt = 0;
   while (x != 6174) {
       int hi = highest_number_with_digits_of(x);
       int lo = lowest_number_with_digits_of(x);
       x = hi - lo;
       cnt = cnt + 1;
   }
   return cnt;
}
int main()
{
    int x_1,n,tmp1,test_case = 0;

    cin >> n;
    while(n--){

    int equ[4],i = 0;
    memset(equ,0,sizeof(equ));//array initilize
        int y = 1;

        cin >> x_1;
        tmp1 = x_1;
        //check every digits are equeal r not equal
        while(x_1 != 0){
            int tmp = x_1%10;
            x_1 /= 10;
            equ[i] = tmp;
            i++;
        }
        sort(equ,equ+4);

        if(equ[0] == equ[1] and equ[1] == equ[2] and equ[2] == equ[3]) y = 0;

        cout << "Caso #" << ++test_case << ": ";
        if(tmp1 == 0 or y == 0) cout << -1 << endl;
        else  cout << krapekar(tmp1) << endl;

    }
    return 0;
}
