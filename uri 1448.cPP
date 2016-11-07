#include <iostream>
#include <cstdio>
using namespace std;

int main(int argc, char const *argv[])
{
	int n, k, i, c, c1, x = 1, tmp;
	string st, st1, st2;
	bool bo;
	cin >> n; cin.ignore();

	while(n--)
	{
		getline(cin, st); getline(cin, st1); getline(cin, st2);
		k = st.length();
		c = 0; c1 = 0; tmp = 2; bo = true;

		for (int i = 0; i < k; ++i)
		{
			if(st[i] == st1[i]) c++;
			else{
				if(bo && st[i] == st2[i]){
					tmp = 1;
					bo = false;
				}
			}

			if(st[i] == st2[i]) c1++;
			else{
				if(bo && st[i] == st1[i]){
					tmp = 0;
					bo = false;
				}
			}
		}

		cout << "Instancia " << x << endl; x++;

		if(c > c1) cout << "time 1" << endl;
		else if(c < c1) cout << "time 2" << endl;
		else{
			if(tmp == 0) cout << "time 1" << endl;
			else if (tmp == 1) cout << "time 2" << endl;
			else cout << "empate" << endl;
		}

		cout << endl;
	}

	return 0;
}
