#include <bits/stdc++.h>
using namespace std;


int main() {
  int n , i, j, k, l ,m,count = 0 ;
  double cont;
  string ss;

 map<string, int>map;
  std::map<string, int>::iterator it ;

  cin >> n; cin.ignore();
  for (int i = 0; i < n; i++)
    {
    	map.clear();
        cont = 0;
        if (count != 0){
        	cout << endl;
        }else{
        	getline(cin,ss);
        }

        while (getline(cin,ss) && ss[0] != '\0')
        {
            map[ss]++;
            cont++;
}
  	for(it = map.begin();it != map.end() ; it++)
    cout << it->first << " " << fixed << setprecision(4) << (it->second*100*1.0)/cont << endl;

    count++;
  }
	return 0;
}
