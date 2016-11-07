#include <bits/stdc++.h>
using namespace std;
#define M 3.236067977
#define N -1.236067977
#define T 2.236067977
int main() {
int n,m;
double m1,n1;
cin >> n ;
m1 = ((pow((1+sqrt(5)),n) - pow(1-sqrt(5),n))/(pow(2,n)*sqrt(5)));
printf("%.1lf\n",m1);

	return 0;
}
