#include <stdio.h>

int maa(int tt){
   int i,j,to=1;
        for(i=0;i<=tt;i++){
         for(j=i-1;j>=0;j--){
            to++;
        }
    }
   return to;
}

int main()
{
    int n, i, j, c=0;
    while(scanf("%d", &n) != EOF)
    {
        c++;
        if(n == 0) printf("Caso %d: 1 numero\n", c);
        else printf("Caso %d: %d numeros\n",c,maa(n));
        printf("0");
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=i; j++)
                printf(" %d", i);
        }
        printf("\n\n");
    }
    return 0;
}
