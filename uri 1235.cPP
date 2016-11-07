#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main()
{
    char s1[101],s3[101],s2[101];
    int i,t=0,y=0,n,j;
    cin >> n;
    cin.getline(s1,0);
    while(n--){
    	t=0,y=0,j=0;
    	 cin.getline(s1,101);
      //cin >> s1 >> s3 ;
    for(i=0;s1[i]!='\0'; i++)t++;

    for(i=t-1;i>=0; i--){
    	if(i>=t/2){
    		 s2[j]=s1[i];
             j++;
    	}else{
       s3[y]=s1[i];
       y++;
    	}
    }
     s3[y]='\0';
     s2[j]='\0';
     cout<<s3<<s2;
     cout <<"\n" ;
    }
    return 0;
}

