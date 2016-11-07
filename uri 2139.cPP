#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,m,df[12];
	 df[1]=31;df[2]=29;df[3]=31;df[4]=30;df[5]=31;df[6]=30;
	 df[7]=31;df[8]=31;df[9]=30;df[10]=31;df[11]=30,df[12]=31;
	string a;
	while(cin>>n>>m){
		int g = 0;
      if(n==12 && m == 25){
      	printf("E natal!\n",g);
      }else{
      	if(n==12 && m>25){
      		printf("Ja passou!\n",g);
      	}
      else if(n==12 && m==24){
      	printf("E vespera de natal!\n",g);
      }else{
      	  int ll=0,g=0;
      	  for(ll=1;ll<n;ll++){
      	  	if(n!=1)
      	  	 g+=df[ll];
      	  }
      	  printf("Faltam %d dias para o natal!\n",360-(g+m));
      }
    }

	}
	return 0;
}
