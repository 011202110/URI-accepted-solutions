#include <iostream>
using namespace std;

int main() {
int i ,n,j,k;
int dd[10];
string a,b;
while(cin>>a){
	int l0=0,l1=0,l2=0,l3=0,l4=0,l5=0,l6=0,l7=0,l8=0,l9=0;
	k=0;
	for(i=0;i<a.size();i++){
		//for(j=0;j<10;j++){
			if(a[i]=='0')l0++;
			if(a[i]=='1')l1++;
			if(a[i]=='2')l2++;
			if(a[i]=='3')l3++;
			if(a[i]=='4')l4++;
			if(a[i]=='5')l5++;
			if(a[i]=='6')l6++;
			if(a[i]=='7')l7++;
			if(a[i]=='8')l8++;
			if(a[i]=='9')l9++;
		//}
	}
	//for(j=0;j<10;j++){
	int  mm=0;
		dd[0]=l0;	dd[1]=l1;	dd[2]=l2;	dd[3]=l3;	dd[4]=l4;	dd[5]=l5;
			dd[6]=l6;	dd[7]=l7;	dd[8]=l8;	dd[9]=l9;
			for(j=0;j<10;j++){
				//cout<<dd[j]<<endl;
				if(mm<=dd[j]){
					mm=dd[j];
						//cout<<mm<<endl;
					k=j;
				}
			}
			//	cout<<l0<<l1<<endl;
		cout<<k<<endl;
}
	return 0;
}
