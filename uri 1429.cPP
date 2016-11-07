#include <bits/stdc++.h>
using namespace std;


int main() {
  int n,i,j,y,you;
  char s1[6];
  ;
  while(cin >> s1){
    y=0;you=0;
    int t=1,ans=0,e,fac=1,c=0;
     you =  strlen(s1);
    	y = atoi(s1);
    	if(y==0) break;
    while(y!=0){
     	c++;
   	e=y%10;y/=10;
   	while(t<=you && t<=c){
   		fac = fac*t;
   		t++;
   	}
   ans += e*fac;
   }
   	cout<<ans<<endl;
  }
      return 0;
}
