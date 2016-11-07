#include <bits/stdc++.h>
using namespace std;

int main() {
int t,n,p,k=0,l=0,i,j;
string a,d;
char c[101],b[101];
while(getline(cin,a)){
	if(a=="0")break;
	k=i=j=0;
	while(i<=a.size()){
      if(a[i]!=' ' && a[i] !='\0' ){
      	b[j++] = a[i];
      	k++;
      }else{
      	if(l<=k){
      		l=k;
          strcpy(c,b);
      	}
      	j=0;
      	if(a[i]=='\0')
      	cout<<k;
      	else
      	cout<<k<<"-";
      	k = 0;
      }
      i++;
      b[j]='\0';
	}
cout<<endl;
}
cout<<"\nThe biggest word: ";
      printf("%s\n",c);
	return 0;
}
