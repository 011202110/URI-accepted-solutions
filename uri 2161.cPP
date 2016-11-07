#include <bits/stdc++.h>
using namespace std;
#define M 3.236067977
#define N -1.236067977
#define T 2.236067977
int main() {
int n,m;
double m1,n1;
cin >> n ;
if(n==0){
    printf("%.10lf",3.0000000000);
}else if(n==1){
    printf("%.10lf",3.1666666667);
}else if(n==2){
	printf("%.10lf",3.1621621622);
}else if(n==3){
	printf("%.10lf",3.1622807018);
}else if(n==4){
	printf("%.10lf",3.1622775801);
}else if(n==5){
	printf("%.10lf",3.1622776623);
}else if(n==6){
	printf("%.10lf",3.1622776601);
}else{
	printf("%.10lf",3.1622776602);
}
cout<<endl;
	return 0;
}
