#include<stdio.h>
int main()
{
    int i,j,b,c,large,l=0;
     while((scanf("%d",&b))!=EOF){
            l=0;
            int a[b];
    for(j=0;j<b;j++){
        scanf("%d",&a[j]);
    }
     large=a[0];
     for(j=1;j<b;j++){
        if(large<a[j]){
            large=a[j];
        }
    }
        if(large>=20){l=3;}
         else if(large>=10 && large<20){l=2;}
         else if(large<10){l=1;}

          printf("%d\n",l);

     }

    return 0;
}
