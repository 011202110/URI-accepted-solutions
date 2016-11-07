#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,i,j,p,z;
  unsigned long long matric[20][20],max[20],n1;
  cin >> n ;
  for(int k = 4;k<n+4;k++){
  	cin >> p;

  	for(i=0;i<p;i++){
  		for(j=0;j<p;j++){
  			cin >> n1;
  			matric[i][j] = n1*n1 ;
  			if(i==0 || matric[i][j] > max[j])
  			max[j] = matric[i][j];
  		}
  	}

  		for(j=0;j<p;j++){
  	    if(max[j] == 0)
  	    z = 1;
  	    else{
  	    	z = 0;
  	    	while(max[j]>0){
  	    		max[j]/=10;
  	    		z++;
  	    	}
  	    }
  	    max[j] = z ;
  	}
  	if(k != 4)
  	cout<<endl;

    cout << "Quadrado da matriz #" << k <<":" << endl;
    for(i=0;i<p;i++){
  		for(j=0;j<p;j++){
  			if(j == 0)
  			cout << setw(max[j]) << matric[i][j];
  			else
  			cout << " " << setw(max[j]) << matric[i][j];
  		}
  		cout<<endl;
    }
  }

	return 0;
}
