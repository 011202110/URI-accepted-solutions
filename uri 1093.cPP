#include <bits/stdc++.h>
using namespace std;

double calculate(int n1,int n2,int at){
	double d;
	if(at==3){
		return (double)n1/(double)(n1+n2);
	}else{
		d = 1.0 -(6-at)/6.0;
		d = (1-d)/d;
		return (1.0 - pow(d,n1))/(1.0 - pow(d,n1+n2));
	}

}
int main(){
	int e1,e2,n,d,at,max;
	double k ;
	while(cin >> e1 >> e2 >> at >> d && e1 && e2 && at && d){
		max = e1;
		e1 = 0 ;
		while(max>0){
			max -= d;
			e1++;
		}
		max = e2 ,e2 = 0;
			while(max>0){
			max -= d;
			e2++;
		}
		k = calculate( e1, e2, at);
		cout <<fixed<<setprecision(1)<<k * 100 <<endl;
	}


	return 0;
}
