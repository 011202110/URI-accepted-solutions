#include <bits/stdc++.h>

using namespace std;
#define sc1(s)    scanf("%s",&s)
#define sc3(a,b,c) scanf("%d %d %d", &a, &b, &c)
#define for(i,a,n) for(int (i) = (a); (i) < (n); (i)++)

double calculate(char c)
{
	if(c == 'W') return 1.00;
	else if(c == 'H') return 0.5;
	else if(c == 'Q') return 0.25;
	else if(c == 'E') return 0.125;
	else if(c == 'S') return 0.0625;
	else if(c == 'T') return 0.03125;
	else return 0.015625;
}

int main(void)
{
	int n, m, k, cont, curr;
	char st[1000001];
	double sum ;
while(  sc1(st) && st[0] != '*')
	{
		cont = sum = 0;
		curr = strlen(st);
for(i,0,curr){
	if(st[i]=='/' && i!= curr-1){
      while (st[i+1]!='/'){
       sum += calculate(st[i+1]);
       if(st[i]=='\0')
          break;
          i++;
      }
	}
	if(sum == 1) {
		cont++;
		sum=0;
	}else{
		sum =0 ;
	}
}
cout << cont << endl;
}

	return 0;
}

