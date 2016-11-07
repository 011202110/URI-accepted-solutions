#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,most=1,a[101],c1=0,c2=0;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin >>a[i];
    }
    if(a[0]<a[1]){
    for(int i=0;i<n-1;i++){
    	if(i%2==0){
    	if(a[i]<a[i+1]) {
         c1++;
    	}
    }else{
       if(a[i]>a[i+1]) c2++;
    }
  }
    }else if(a[0]>a[1]){
    	 for(int i=0;i<n-1;i++){
    	if(i%2==0){
    	if(a[i]>a[i+1]){
    		c1++;
    	}
    }else{
        if(a[i]<a[i+1]){
        	c2++;
        }
    }
  }
    }
   // cout<<c1<<c2<<c1+c2+1<<endl;
    if(c1+c2+1 == n)cout<<1<<endl;
    else cout <<0<<endl;
    return 0 ;
}
