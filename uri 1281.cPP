#include <bits/stdc++.h>

using namespace std;

struct match{
		char dd[100];
		float val;
};

int main (){
	int n,m,r,i,j,vall;
	float sum;
	char s[100];
	cin >> n;
	while(n--){
		sum = 0.0 ;
		cin >> r;
 struct match array[r];
        for(j = 0; j < r; j++){
            scanf("%s %f",&array[j].dd,&array[j].val);
}
		cin >> m;
	for( i = 0;i<m;i++){
			cin >> s >> vall;
		for(int p = 0;p<r;p++){
			if(!strcmp(array[p].dd,s)){
				sum += vall*array[p].val;
			  	break;
			}
		}
	 }

		printf("R$ %.2f\n",sum);
	}


	return 0;
}
