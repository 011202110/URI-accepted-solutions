#include <stdio.h>
#include<string.h>


int main(){
	int a,b=0,c,i,j,k,l,n,m;
	char ar[1000];
	scanf("%d",&n);
	while(n--){
		b=0,c=0;
       scanf("%s",ar);
      for(i=0;ar[i]!='\0';){
       	if(ar[i]=='<')
       		b++;
       	 if(ar[i]=='>'){
       		if(b>0){
       		c++;
       		b--;
       		}
       	 }
       	 i++;
       }
		printf("%d\n",c);
	}

	return 0;
}

