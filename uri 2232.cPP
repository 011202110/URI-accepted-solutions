#include<bits/stdc++.h>
using namespace std;

int main(){
    int  i,j,ca,p=0;
     int sum[32][32];
     sum[1][0] = 1,sum[2][0] = 1, sum[2][1] = 1;

    cin>>ca;
    while(ca--){
          int ans = 3,val;  p = 0;
          cin>>val;
          if(val == 1)ans = 1;
          else if(val == 2) ans = 3;
          else{
     for(i = 3; i<=val ; i++){
        sum [i][0] = 1;
        ans += sum[i][0];
    for(j=1 ; j< i-1 ; j++){
        sum[i][j]  = sum[i-1][j-1] + sum[i-1][j];

        ans += sum[i][j];
    }
   sum[i][j] = 1;
   ans += 1;
}
          }
  cout<<ans<<endl;
}
	return 0;
}
