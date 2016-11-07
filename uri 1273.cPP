#include <bits/stdc++.h>
using namespace std;

int kl[51];
int main(){
string s1,s2;
	string arr[51];
int i=0,j=0,n,maz=0,y,flag=0;
while(cin >> n && n!=0){
	maz=0,j=0,i=0;
	if(flag==1) cout<<endl;
y = n;
while(n--){
	cin >> s1;
    kl[j]=s1.length();
     if(maz<kl[j])maz=kl[j];
     j++;
    stringstream ssin(s1);
    while (ssin.good()){
        ssin >> arr[i];
        ++i;
    }
}
    for(j=0;j<y;j++){
    	int t = maz-kl[j];
    	while(t!=0){
    		cout <<" ";
    		t--;
    	}
    cout <<arr[j]<<endl;
}
arr[j]='\0';

flag=1;
}
    return 0;
}
