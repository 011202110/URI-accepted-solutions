#include <bits/stdc++.h>
using namespace std;
int main(){
	int i=0,j=0,k=0,l=0,p=0,y;
    string a,b;
while(cin >> a>>b ){
	k++;
l = j = p = 0;
int t = 0;
	for(i=0;i<b.size();i++){

		if(b[i] == a[j] || b[i] == a[0]){

			if(b[i] == b[i-1] && j!=0)
			j = 1;
			else{
				j++;
        t++;
			}
		//if(j == a.size()-1)	{
		//	if(l>0)
		//	p = p+1;
		//	else
			p = i+1;
	//	}

		}else{
			j=0;
			t=0;
		}
	if(t==a.size()){
	  l++;
	  //cout<<p<<endl;
	  y = (p-t)+1;
	  t = 0;j=0;
		}
	}
if(l!=0){
  printf("Caso #%d:\nQtd.Subsequencias: %d\nPos: %d\n",k,l,y);
}else{
	 printf("Caso #%d:\nNao existe subsequencia\n",k);
}
cout<<endl;
}
	return 0;
}
