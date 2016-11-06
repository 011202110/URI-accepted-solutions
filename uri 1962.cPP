#include<iostream>
#define dctime 2015
#define actime 2014
using namespace std;

int main()
{
    int n,time,ans;
    cin >> n;
    while(n--){
            cin >> time;
        if(time <2015 ){
            cout << dctime - time <<" D.C." <<"\n";
        }
        else{
            cout << time-actime <<" A.C." << "\n" ;
        }
    }
    return 0;
}

