#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
 double W1, W2, R, acumulacao=0.0;
int qtd=0;


while(cin >> W1 >> W2 >>R ){
     double esq, dir;
     double media;
     if(qtd !=0)
     cout<<endl;
     if(W1+W2+R == 0)
     break;
    esq = W1*(1+ R/30);
    dir = W2*(1+ R/30);

    media = (esq+dir)/2;
    acumulacao+=media;

        qtd++;
        if(media>=1 && media < 13){
            cout << "Nao vai da nao";
        }
        if(media>=13 && media <14){
            cout << "E 13";
        }
        if(media>=14 && media <40){
            cout << "Bora, hora do show! BIIR!" ;
         }
        if(media>=40 && media <=60){
            cout << "Ta saindo da jaula o monstro!" ;
        }
        if(media>60){
            cout << "AQUI E BODYBUILDER!!" ;
        }
}
        if((acumulacao/qtd)>40){
        	cout<<"\n";
           printf("Aqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
        }
  return 0;
}
