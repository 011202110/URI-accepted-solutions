#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	int n,i,j,l,k,k1,luck=1,l1=1,w1=1;
	int left[11],wi[11];
	 while(scanf("%d", &n) && n!=0)
    {
    	int sum = 0,sum1=0;l1=1,w1=1;
        luck=1;
        for(i=0;i<n;i++){
            cin >> left[i] ;
            sum+=left[i];
            }

             for(i=0;i<n;i++){
                cin >> wi[i];
                sum1+=wi[i];
        }


        for( j =0; j < n; j++){
        	k = left[j];
        	k1= wi[j];
        	if(luck==1){
        		if(k==left[j+1]) l1++;
        		else l1=1;
        		if(k1==wi[j+1])  w1++;
        		else w1=1;

        		if(l1==3 && w1==3) luck=0;
        		if(l1==3 && w1<3)  {
        			sum +=30;
        			luck=0;
        		}

        	if(l1<3 && w1==3)  {
        			sum1 +=30;
        			luck=0;
        		}
        	}
        }

        if(sum>sum1) cout <<"M"<<endl;
            else if(sum<sum1) cout <<"L"<<endl;
            else cout <<"T"<<endl;

}
	return 0;
}
