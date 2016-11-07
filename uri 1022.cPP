#include <bits/stdc++.h>
using namespace std;

int main(){

    int n1,n2,d1,d2,n,div=0;
    char s1,s2,s3;
    cin >> n;
    while(n--){
    	cin >> n1 >>s2>>d1 >> s1 >> n2 >>s3>> d2 ;
    if(s1=='+'){
    	cout <<(n1*d2 + n2*d1)<<"/"<<(d1*d2)<<" = ";
    	div = __gcd((n1*d2 + n2*d1),(d1*d2));
    	cout << (n1*d2 + n2*d1) / div <<"/"<<(d1*d2) /div <<endl;
    }else if(s1=='-'){
    	cout <<(n1*d2 - n2*d1)<<"/"<<(d1*d2)<<" = ";
    		div = __gcd((n1*d2 - n2*d1),(d1*d2));
    		if(div < 0) div = -1*div ;
    	cout << (n1*d2 - n2*d1) / div <<"/"<<(d1*d2) /div <<endl;
    }else if(s1=='*'){
    	cout <<(n1*n2)<<"/"<<(d1*d2)<<" = ";
    	div = __gcd((n1*n2),(d1*d2));
    	cout << (n1*n2) / div <<"/"<<(d1*d2) /div <<endl;
    }else{
    	cout <<(n1*d2)<<"/"<<(d1*n2)<<" = ";
         div = __gcd((n1*d2),(d1*n2));
    	cout << (n1*d2) / div <<"/"<<(d1*n2) /div <<endl;
    }

    }

    return 0;
}
