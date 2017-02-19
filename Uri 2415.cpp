#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,ans = 0 , t = 1;
    scanf("%d",&a);
    int ar[a+1];
   for(int i = 0; i < a ;i++){
   	scanf("%d",&ar[i]);
   	   	if(ar[i] == ar[i-1]) t++;
   	    else ans = max(ans,t) , t = 1;
   }
   ans = max(ans,t);
   printf("%d\n",ans);
    return 0;
}

