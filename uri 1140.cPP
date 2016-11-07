#include <iostream>
#include<string>
#include<stdio.h>
using namespace std;

int main() {
	int i,j,first,reminder,second,n;
	char st[1200];
  while(gets(st)){
			if(st[0]=='*') break;
	int	m=1 ;
	int l = 1;
		for(i=0;st[i]!=NULL;i++){

			char ch,ch1;
			ch = st[0];
	   if(ch<=90 && ch>=65){
	   	ch = st[0];
	   	ch1 = st[0] + 32;
	   }else{
	   	ch = st[0];
	   	ch1 = st[0] - 32;
	   }
			if(st[i]== ' '){
			        	if(st[i+1] == ch || st[i+1] == ch1){
			        		l++;
			        		}
		                   m++;
		                   }
	           	}
	           	if(m==l)cout<<"Y"<<"\n";
	           	else cout<<"N"<<"\n";
}

	return 0;
}
