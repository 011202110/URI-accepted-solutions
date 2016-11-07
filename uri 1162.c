#include <stdio.h>

int main(void) {
	int n,m,l,k,i,j;
	int ar[100];
	scanf("%d",&n);
	while(n--){
		scanf("%d",&m);
		k=0;
		for(i=0;i<m;i++)scanf("%d",&ar[i]);
		l=0;
		for(i=0-1;i<m;i++){
			for(j=0;j<m-1;j++){
				if(ar[j]>ar[j+1]){
					l = ar[j];
					ar[j] = ar[j+1];
					ar[j+1] = l;
					k++;
				}
		   	}
		}
			printf ("Optimal train swapping takes %d swaps.\n",k);
	}
	return 0;
}

