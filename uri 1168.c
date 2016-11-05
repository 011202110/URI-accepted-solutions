#include <stdio.h>

int main(){
    int a, j,i;
    char n[101];
    long long leds;


    scanf("%d", &a);

    for( i = 0; i < a; i++){
            scanf("%s", &n);
            j = 0;
            leds = 0;
            while(1){
                        if(n[j] == '\0') break;
                        if(n[j] == '1') leds += 2;
                        if(n[j] == '2' || n[j]=='3' || n[j]=='5') leds += 5;
                        if(n[j] == '4') leds += 4;
                        if(n[j] == '6' || n[j]=='9' || n[j]=='0') leds += 6;
                        if(n[j] == '7') leds += 3;
                        if(n[j] == '8') leds += 7;
                        j++;
            }
            printf("%lld leds\n", leds);
    }
    return 0;
}

