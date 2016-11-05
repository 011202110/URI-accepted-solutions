#include <stdio.h>

int main() {
    char d;
    int i, j, c;
    float s = 0.0, n;

    scanf("%c", &d);

    for (i = 0; i <= 11; i++) {
        for (j = 0; j <= 11; j++) {
            scanf("%f", &n);
                if (j>i){
                s += n;
                }
        }
    }

    if (d == 'S')
        printf("%.1f\n", s);
    else
        printf("%.1f\n", s /66);

    return 0;
}



