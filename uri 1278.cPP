#include <bits/stdc++.h>
using namespace std;

vector<string>mt;

int removeSpaces1(int k1)
{
	string a1 = mt[k1] ;
	string b1 ;
        int p1 = 0 ;
      int k = a1.size();
     int j = 0,i = 0;
    	while(i<=k){
    		if((a1[i] >=65 && a1[i] <91)){
    			j++ ;
    		}
    		if(a1[i] == ' '|| a1[i] == '\0'){
    			p1 += j ;
    			if(j!=0){
    			p1 +=1;
    			}
    			j = 0;
    		}
    		i++ ;
    	}

       return (p1-1);
}


int main() {
	string s1,s2;
	char s[1010],b1[1010];
	int i , j, k, l ,n ,m=0 ,mm=0,pp=0,ll = 0,po=0;

	while(cin >> n && n!=0){
		if(po == 1)
		cout<<"\n";
	     mt.clear();
		m = i = pp = mm = 0;
		l  = n;
		cin.getline(s,0);
		for(j=0;j<l;j++){
			cin.getline(s,1010);
			mt.push_back(s);
		    k = removeSpaces1(j);
			if(m < k)
			m = k ;
		}
		pp = i = mm = 0;

		while(n>0){
				l = m -  removeSpaces1(pp);
				for(int p = 0 ;p<l;p++) cout <<" ";
		string a1 = mt[mm];
    	k = a1.size();
    	j = 0,i = 0;
    	 while(a1[i-1]!='\0'){
    		if((a1[i] >=65 && a1[i] <91)){
    			b1[j]  = a1[i] ;
    			j++ ;
    		}
    		if(a1[i] == ' '|| a1[i] == '\0'){
    		    cout << b1;
    		    ll += j ;
    			if(j!=0 && ll+l < m){
    			cout <<" ";
    		    ll += 1;
    			}

    			j = 0;
    		}
    		b1[j] = '\0';
    		i++;
    	}
             ll = 0;
			pp++;mm++;

			 	cout <<endl;

			 	n--;
		}
      po = 1;

	}
	return 0;
}
