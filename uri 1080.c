#include<stdio.h>
int main ()
    {

        int n,i,h,posi;
           int a[100];

        h=a[0];
        posi=0;
        for(i=1;i<=100;i++){
                 scanf("%d",&a[i]);
            if(h<a[i]){
                h=a[i];
                posi=i;
            }
         }
        printf("%d\n%d\n",h,posi);
        return 0;
    }

