#include <bits/stdc++.h>
using namespace std;
int main(){

    int n1,n2,d1,d2,n,div=0,i,j;
    char s1[1001];
     while(scanf("%s",&s1)!=EOF){
     	n1=0,n2=0,d1=0;
     	for(i=0;s1[i]!='\0';i++){
     	 if(s1[i]=='('){
     	 	n1++;
     	 	}
     		else if(s1[i] == ')') {
     			n2++;
     			if(n1>0){
     				n1--,n2--;
     			}
     		}

     	}
    if(n1==0 && n2==0) cout <<"correct\n";
    else  cout <<"incorrect\n";
    }
    return 0;
}
