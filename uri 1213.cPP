#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k=1,count,qui;
	 while(scanf("%d", &n)!=EOF)
    {
     count = 1,qui=0,k=1;
     	long int w1=1;
     while(k){
     	if(w1<n){
     		 w1 = w1*10 +1;
     		 count++;
     	}
     	 qui = w1 % n;

     	 if(qui==0)
     	 	 break;
     	 else w1 = qui ;

     }

     cout << count << endl;
}
	return 0;
}
