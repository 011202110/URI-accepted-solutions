#include <bits/stdc++.h>
using namespace std;
int main() {
int y,z;
bool b ;
 int d[15] = {7, 12, 22, 52, 102, 15, 25, 55, 105, 30, 60, 110, 70, 120, 150};
while(scanf("%d%d",&y,&z)&& z!=0 && y!=0){
	b = false ;
	for(int i = 0 ;i<15;i++){
	if(d[i] == z - y) {
		b = true;
		break;
    	}
	}
  (b)?printf("possible\n"):printf("impossible\n");
}
	return 0;
}
