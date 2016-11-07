#include <bits/stdc++.h>
using namespace std;

 long long int factorial(long long int x,  long long int z){
	if(x>0)
    return x*factorial(x-z,z);
    return 1;

}

int main() {
  int n,i,j,y;
  long long int you;
  string s1;
  cin>>n;
  while(n--){
  	cin >>y>>s1;
    you =	factorial(y,s1.length());
  	cout<<you<<endl;

  }
    return 0;
}
