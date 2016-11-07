#include <stdio.h>

int main(void) {
	int n,m,l,k,i,j;
	int ar[1000],at[1000],fi[1000][1000];
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&k,&m);

		for(i=1;i<=m;i++)scanf("%d",&ar[i]);

for(i = 0; i < k; i++)
{
    for(j = 1; j<=m; j++)
    {
        fi[i][j] = 0;
    }
}
		for(i=0;i<k;i++){
			fi[i][0] = i ;
			for(j=1;j<=m;j++){
			      if(i == ar[j]%k ){
			      	fi[i][j]=ar[j];
			      }
			     }
		}
			for(i=0;i<k;i++){
			  for(j=0;j<=m;j++){
			  	if(j==0)
			  	printf("%d -> ",fi[i][j]);
			  	if(fi[i][j]!=0 && j!=0 )
			    printf("%d -> ",fi[i][j]);
			     }

				printf("\\\n");
		}
		if(n==0){
			break;
		}else{
		printf("\n");
		}

	}

	return 0;
}
