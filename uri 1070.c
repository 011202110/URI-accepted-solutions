#include <stdio.h>
int main(){
 int n,i;
scanf("%d",&n);
if (n % 2 == 0)
 n++;

 for (i = 0; i <= 5; i++, n += 2)
     printf("%d\n",n);
return 0;
}

