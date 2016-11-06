#include <stdio.h>

int main(){
    char o;
    int i, j, l = 1;
    double s = 0, n=0;
    scanf("%c", &o);
    for (i = 0; i <= 11; i++){
        for (j = 0; j <= 11; j++){
            scanf("%lf", &n);
          if(i > 5 && j < 11 -i )
                s += n;
           else if (i <= 5 && j < i  )
                s += n;
        }
        l++;
    }
    if (o == 'S')
        printf("%.1f\n", s);
    else
        printf("%.1f\n", s / 30);
    return 0;
}
