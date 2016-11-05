#include <stdio.h>

int main() {
    char d;
    int i, j, c;
    float s = 0.0, n;

    scanf("%d ", &c);
    scanf("%c", &d);

    for (j = 0; j <= 11; j++) {
        for (i = 0; i <= 11; i++) {
            scanf("%f", &n);
            if (i == c)
                s += n;
        }
    }

    if (d == 'S')
        printf("%.1f\n", s);
    else
        printf("%.1f\n", s /12);

    return 0;
}


