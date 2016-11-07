#include<stdio.h>
#include<string.h>


int main() {
	 long long int n,n2,add;
	int i=0,j;
	char ar[101],br[11],cr[101],dr[11];
     scanf("%d",&j);
     while(j--){
	scanf("%s %s %s %s %lld %lld",ar,br,cr,dr,&n,&n2);
	add = n+n2 ;
	if(br[0]=='P'){
	    if(add%2 == 0)printf("%s\n",ar);
		else printf("%s\n",cr);
	}else{
	    if(add%2 ==0)printf("%s\n",cr);
		else printf("%s\n",ar);
	}
     }
	return 0;
}
