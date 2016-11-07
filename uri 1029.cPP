#include <bits/stdc++.h>
using namespace std;

int coun;

int fibonacci(int n){
	coun++;
	if(n==0)return 0;
	else if(n==1)return 1;
	else return fibonacci(n-1)+fibonacci(n-2);

}


int main(){
    int m,a,b=0;
    cin >> a;
    while(a--){
    	cin >> m;
    	coun = 0;
        printf("fib(%d) = %d calls = %d\n",m,coun-1,fibonacci(m));
}
    return 0;
}
