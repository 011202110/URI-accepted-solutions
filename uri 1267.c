#include <stdio.h>

int main(void) {
int i,n,a,b,l,k,j,mid[1000][1000],m;
int re[1000],ra;
while(scanf("%d %d",&a,&b) && a!=0 && b!=0){


	for(i=0;i<b;i++){
		for(j=0;j<a;j++){
          	scanf("%d",& mid[i][j]);
		}
	}

	for(i=0;i<a;i++){
		re[i] = 0;
		for(j=0;j<b;j++){
			re[i] += mid[j][i];
		}
	//	printf("%d ",re[i]);
         if(re[i]==b){
         l=1;
         break;
         }
         else{
         l=0;
         }


	}


	if(l!=0)
	printf("yes\n");
	else
	printf("no\n");

}
	return 0;
}
