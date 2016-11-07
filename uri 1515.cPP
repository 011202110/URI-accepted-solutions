#include<bits/stdc++.h>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int n, m, a, b, i, j, k, l;
    string st,s1;
    while(cin >> n && n!=0){
    	k = 2114;
    	while(n--){
    		cin >> st >> a >> b;
    		if(a-b < k){
    			k = a-b;
    			s1 = st;
    		}
    	}
    	cout <<s1<<endl;
    }
	return 0;
}
