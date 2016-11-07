#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j,k,l,p;
    string a,b;
    char a1[101],b1[101];
    cin >> n ;
  cin.getline(a1,0);
    for(p=0;p<n;p++){

    	cin.getline(a1,101);

    	k = strlen(a1);
    	j = i = 0;
    	while(i<=k){
    		if((a1[i] >=65 && a1[i] <=91) || (a1[i] >=97 && a1[i] <=122)  || (a1[i] == '.')){
    			b1[j]  = a1[i] ;
    			j++ ;
    		}
    		if(a1[i] == ' '|| a1[i] == '\0'){
    			if(b1[1] == 'o' && b1[2] == 'u' && b1[3] == 'l' && b1[4] == 'u' && b1[5] == 'p' && b1[6] == 'u' && b1[7] == 'k' && b1[8] == 'k' ){
    			if(strlen(b1) == 10)
    			cout <<"Joulupukki";
    			else
    			cout <<"Joulupukki"<<b1[j-1];
    			}
    			else
    			cout << b1;

    			j = 0;
    		}
    		if(a1[i] == ' ')
    		cout << a1[i] ;

    		b1[j] = '\0';
    		i++ ;
    	}
    	cout<<endl;
    }
	return 0;
}
