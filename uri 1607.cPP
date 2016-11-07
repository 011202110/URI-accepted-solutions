#include <bits/stdc++.h>
using namespace std;

int main (){
	int i,j,n,result,val1,val2,size,q;
    string s1,s2,s3,s;
    cin >> n;
    while(n--){
    	cin >> s1 >> s;
        result =0;
    /*  q = s1.find(' ');
      s2 = s1.substr(0,q);
      s3 = s1.substr(q+1);*/

    	size = s1.size();
    	for(i=0;i<size;i++){
    		val1 = (int)s1[i];
    		val2 = (int)s[i];
    		if(val1>val2)
    		result += (26 -(val1-val2)) ;
    		if(val1<val2)
    		result += (val2-val1) ;
    	}
    	cout << result <<endl;
    }
	return 0;
}
