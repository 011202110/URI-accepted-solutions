#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,i=0;
	string a, b;
	cin >> n;

	while (n--)
	{
		cin >> a >> b;
		i++;
		if(a == b) printf("Caso #%d: De novo!\n", i);
		else if(a == "tesoura" && b == "papel") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "papel" && b == "pedra") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "pedra" && b == "lagarto") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "lagarto" && b == "Spock") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "Spock" && b == "tesoura") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "tesoura" && b == "lagarto") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "lagarto" && b == "papel") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "papel" && b == "Spock") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "Spock" && b == "pedra") printf("Caso #%d: Bazinga!\n", i);
		else if(a == "pedra" && b == "tesoura") printf("Caso #%d: Bazinga!\n", i);
		else printf("Caso #%d: Raj trapaceou!\n", i);
	}
	return 0;
}
