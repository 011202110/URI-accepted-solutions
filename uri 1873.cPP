#include <iostream>
using namespace std;

int main() {
	string a,b;
	int n,i;
	cin >> n;
	while(n--){
		cin >> a >> b ;
        	if(a == b)  cout << "empate\n";
			else if(a == "tesoura"  && b == "papel") cout << "rajesh\n";
			else if(a == "papel"    && b == "pedra")  cout << "rajesh\n";
			else if(a == "pedra"    && b == "lagarto") cout << "rajesh\n";
			else if(a == "lagarto"  && b == "spock")  cout << "rajesh\n";
			else if(a == "spock"    && b == "tesoura")  cout << "rajesh\n";
			else if(a == "tesoura"  && b == "lagarto")  cout << "rajesh\n";
			else if(a == "lagarto"  && b == "papel") cout << "rajesh\n";
			else if(a == "papel"    && b == "spock")  cout << "rajesh\n";
			else if(a == "spock"    && b == "pedra")  cout << "rajesh\n";
			else if(a == "pedra"    && b == "tesoura")  cout << "rajesh\n";
            else  cout << "sheldon\n";
	}
	return 0;
}




\
