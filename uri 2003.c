#include <stdio.h>

int main(void) {
  int a,b,n;
	char aa;
while(scanf("%d %c %d",&a,&aa,&b)!=EOF){

	printf("Atraso maximo: ");
	if(a<7 || (a==7 && b==00))
		printf("0\n");
	else
	  	printf("%d\n",(a-7)*60 + b);
     }
	return 0;
}
