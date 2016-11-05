#include<stdio.h>

int main()
{
    int a,b,c;

    scanf("%d",&a);
    while(a--){
        scanf("%d %d",&b,&c);
        if( ( ( (3*b) * (3*b) ) +(c*c) ) > ( (2*(b*b) ) + (5*c)*(5*c)) && ( ( (3*b) * (3*b) ) +(c*c) )>((-100*b)+(c*c*c))){
            printf("Rafael ganhou\n");
        }else if(( (2*(b*b) ) + (5*c)*(5*c))>  ( ( (3*b) * (3*b) ) + (c*c) ) && ( (2*(b*b) ) + (5*c)*(5*c))> ((-100*b)+(c*c*c))){
             printf("Beto ganhou\n");
        }else{
            printf("Carlos ganhou\n");
        }
    }
    return 0;
}
