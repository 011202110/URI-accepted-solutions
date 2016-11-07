#include <bits/stdc++.h>
using namespace std;
char s1[99999] = {'F','A','C','E'};
 int main() {
          int n,m,r=0;
          char c1,c2,c3,c4;
          int l = 4;
          cin >> n ;
          for(int  i = 0;i<n;i++){
          	cin >> c1 >> c2 >> c3 >> c4;
          	 if(c1 == s1[l-1] && c2 == s1[l-2] && c3 == s1[l-3] && c4 == s1[l-4]){
          	 	l-=4;
          	 	if(l==0)
           	     s1[0] == 'F' , s1[1] == 'A' , s1[2] == 'C' , s1[3] == 'E',l=4;
          	r++;
          	 }
          	else{
          	s1[l] = c1,l++,s1[l] = c2,l++, s1[l] = c3,l++,s1[l] = c4,l++;
          	}
          }
          cout << r <<endl;
	return 0;
}
