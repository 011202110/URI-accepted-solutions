#include <stdio.h>


int main(){
	int a,b=0,c,i,j,k,l,n,m;

	while(scanf("%d %d",&n,&a)!=EOF){
	b=0;
		while(a!=0){
				b+=a%10;
				a/=10;
		}
		if(b%3==0){
			printf("%d sim\n",b);
		}else{
			printf("%d nao\n",b);
		}
	}

	return 0;
}

