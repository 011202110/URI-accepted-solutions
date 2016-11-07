#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
	int a,b,c,i,j,k,l,n,m;
	int ar[1000],br[100];
	scanf("%d",&n);

		 if (n == 1)
            cout << "Top 1" <<endl;
         else if(n>1 && n<4)
          cout << "Top 3" <<endl;
          else if(n>3 && n<6)
          cout << "Top 5" <<endl;
          else if(n>5 && n<11)
          cout << "Top 10" <<endl;
          else if(n>10 && n<26)
          cout << "Top 25" <<endl;
          else if(n>25 && n<51)
          cout << "Top 50" <<endl;
          else
           cout << "Top 100" <<endl;


	return 0;
}
