#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
    char s1[51],s3[51];
    int i,t=0,y=0,n;
    cin >> n;
    while(n--){
      cin >> s1 >> s3 ;

      t=0,y=0;
    for(i=0;i<50; i++)
    {
    	if(s1[i]=='\0') t=1;
    	if(s3[i]=='\0') y=1;

    	if(t==1 && y==1) break;
    	if(t!=1)	cout<<s1[i];
    	if(y!=1)	cout<<s3[i];
    }
     cout <<"\n" ;
    }
    return 0;
}

