#include <bits/stdc++.h>
using namespace std;

int main() {
	 int i,n,k,r[100];
   long long int sum=0,sum1=0;
   string st,str;
   while(cin >> st >> str){
   	sum = sum1 = 0;
   	if(st == "0" && str == "0") break;
   	for(i = 0;st[i]!='\0';i++ ){
   		if(st[i]!='0')
   		sum +=st[i]- '0';
   		sum%=10;
   	}
   		for(i = 0;str[i]!='\0';i++ ){
   		if(str[i]!='0')
   		sum1 +=str[i]- '0';
   		sum1 %= 10;
   	}
   		if(sum>sum1) cout <<"1"<<endl;
   		else if(sum<sum1) cout <<"2"<<endl;
   		else cout <<"0"<<endl;
   }

	return 0;
}
