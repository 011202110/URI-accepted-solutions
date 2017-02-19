#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, t ;
     map < int ,int > st;
     scanf("%d",&a);
     while(a--){
     	scanf("%d",&t);
     	if(st.count(t) == 0)
     	    st[t]++;
     }
     printf("%d\n",st.size());
    return 0;
}

