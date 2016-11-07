#include <iostream>
#include<string.h>
using namespace std;

int main() {
  int n,i,j;
  char s1[21];
  cin>>n;
  while(n--){
  	cin >> s1;
  	if(strlen(s1)<4){
  	if((s1[0]=='U' && s1[1]=='R' && s1[3]!=' ')){
  			cout<<"URI";
  	}else if((s1[0]=='O' && s1[1]=='B' && s1[3]!=' ')){
  		    cout<<"OBI";
  	}else{
  		cout<<s1;
  	}
  }else{
  		cout<<s1;
  	}
  	if(n!=0)
  	cout<<" ";
  }
  cout<<endl;
	return 0;
}
