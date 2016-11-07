#include <bits/stdc++.h>
using namespace std;

int matric[12][12];
int main() {
	int n,i,j;
     cin >> n ;
  while(n--)
	{
		memset(matric, 0, sizeof matric);

		for (i = 0; i < 9; i += 2)
			for (j = 0; j <= (i + 1); j += 2)
			 cin >> matric[i][j];

		for (i = 0; i < 8; i += 2)
		{
			for (j = 0; j <= (i + 1); j += 2)
			{
				matric[i + 2][j + 1] = (matric[i][j] - matric[i + 2][j] - matric[i + 2][j + 2]) / 2;
				matric[i + 1][j] = matric[i + 2][j] + matric[i + 2][j + 1];
				matric[i + 1][j + 1] = matric[i + 2][j + 1] + matric[i + 2][j + 2];
			}
		}

		for (i = 0; i < 9; ++i)
		{
			for (j = 0; j < (i + 1); ++j)
			{
				cout << matric[i][j];
				if(j != i)
					cout<<" ";
			}
			cout<<endl;
		}
	}

	return 0;
}
