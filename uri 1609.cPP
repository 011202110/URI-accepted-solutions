#include <bits/stdc++.h>
using namespace std;

int main (){
	int n,val1,q;

   	set<int>set;
   	std::set<int>::iterator it;

   	  cin >> n;

    while(n--){

          cin >> q;

      set.clear();
      int coun = 0;

      while(q--)
		{
			cin >> val1;
			const bool there = set.find(val1) != set.end();

			if (!there) {
 				set.insert(val1);
 				coun++;
			}

        }
        cout << coun <<endl;
    }
	return 0;
}
