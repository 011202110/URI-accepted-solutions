#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	int n,i,j,l,k;
	int right[61],left[61],si;
	char st ;
	 while(scanf("%d", &n) != EOF)
    {
    	int sum = 0;
        memset(right, 0, sizeof(right));
        memset(left, 0, sizeof(left));

        while(n--){
            cin >> si >> st;
            if(st == 'D')
                right[si]++;
            else
                left[si]++;
        }

        for( i =30; i < 61; i++)
            sum += min(right[i], left[i]);

        cout <<sum <<endl;
}
	return 0;
}
