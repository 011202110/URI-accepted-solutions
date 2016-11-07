#include <iostream>
#include <algorithm>
#include <cstring>
#include <cstdio>
using namespace std;

int main() {
	int n,i,j,l,size,num_str;
	 while (cin >> n && n != 0) {
    	int sum = 0;
        while(n--){
        	cin >> size >> num_str ;
            sum += num_str/2;
        }
        cout <<sum/2 <<endl;
}
	return 0;
}
