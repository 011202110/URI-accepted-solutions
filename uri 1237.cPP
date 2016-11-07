#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
    string s1,s2;
    int i,t=0,y=0,n,j,p,res;
    while(getline(cin,s1) && getline(cin,s2)){
    	t = s1.length();
    	y = s2.length();
    	p=0;
    for(i=0;i<t; i++){
    	for(j=0;j<y; j++){
         if(s1[i]== s2[j]){
         	n=0;
         	for(int k=0;k+i<t,k+j<y; k++){
         		if(s1[k+i] != s2[k+j])
         		break;
         		n++;
         }
        if(n>p) p = n ;
    	}
      }
    }
     cout<<p<<"\n" ;
    }
    return 0;
}

