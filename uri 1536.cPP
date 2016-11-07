#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,t1_m1,t2_m1,t1_m2,t2_m2;
    char ch ;
    cin >> n;
    while(n--){
    	cin >>t1_m1>>ch>>t2_m1;
    	cin >>t2_m2>>ch>>t1_m2;

    	if(t1_m1 + t1_m2 > t2_m1+t2_m2){
    		cout <<"Time 1"<<endl;
    	}else if(t1_m1 + t1_m2 < t2_m1+t2_m2){
    			cout <<"Time 2"<<endl;
    	}else{
    		if(t1_m2  > t2_m1)
    		cout <<"Time 1"<<endl;
    		else if(t1_m2  < t2_m1)
    		cout <<"Time 2"<<endl;
    		else
    		cout <<"Penaltis"<<endl;
    	}

    }

	return 0;
}
