#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    char input[80];
    char input2[80];
    char input3[80];
    int n;
    cin >> n;
    while(n--){

    cin >> input;
    cin >> input2;

           if(input[1] == 't' && input2[1] == 't')
                      	cout <<"Aniquilacao mutua\n";
           else if(input[1] == 'a' && input2[1] == 'a')
                      	cout << "Ambos venceram\n";
           else if(input[1] == 'e' && input2[1] == 'e')
                      	 cout << "Sem ganhador\n";
           else if(input[1] == 't' || (input[1] == 'e' && input2[1] == 'a'))
                      	cout << "Jogador 1 venceu\n";
           else cout << "Jogador 2 venceu\n";

    }
    return 0;
}

