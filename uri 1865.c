#include<stdio.h>
#include<string.h>
#define N 25000
int main(){
    int a,b[N],i,j;
    char na[100];
    scanf("%d",&a);

     int  min=b[0];

 for(i=0;i<a;i++)
{
        scanf("%s %d",&na,&b[i]);
         if(na[0] == 'T' && na[1] == 'h' && na[2]=='o' && na[3] == 'r' ){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }

    }

    return 0;
}
