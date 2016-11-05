#include <stdio.h>
int main(){
 int h, hm, hr,m,mm,mr;
 scanf("%d %d %d %d", &h, &m,&hm,&mm);

 hr = hm - h;
 if (hm - h < 0)
 hr = 24 + hm - h;
 mr=mm-m;
 if(mm-m<0){
    mr=60+mm-m;
    hr--;
 }
if (hm == h && mm==m)
 printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
 else
 printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr,mr);
 return 0;
}


