#include <stdio.h>

int main(){
    float a = 1;
    int b = 2,i;
    for(i = 3; i <=39; i++){
            a += (float)i/(float)b;
            i++;
            b *= 2;
    }
    printf("%.2f\n",a);
    return 0;
}

