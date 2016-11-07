#include <stdio.h>

int result(int n1,int n2){
	int re[4],i=0,c=0,j=0,t,am[4],h=0,b,d;

		for(i=n1;i<=n2;i++){
			j=0,c=0;
			t = i;
	while(t!=0){
	   re[j]=t%10;
	   t/=10;
	   	 j++;
	}
	for(d=0;d<j;d++){
		for(b=d+1;b<j;b++){
			if(re[d]==re[b]){
		   	c=1;
			}
	   	}
	}
	if(c==0)
		h++;
		}
	return h;
}

int main(void) {
	int i,j,k,n,m,c,a,b;

while (scanf("%d %d",&n,&m)!=EOF){
k = result(n,m);

printf("%d\n",k);
}
	return 0;
}

