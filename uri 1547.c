#include<stdio.h>
#include <math.h>

int main()
{
    int a,b,i,e,bb,p;
    int arr[100];
    scanf("%d",&a);
    while(a--){

        scanf("%d %d",&b,&e);
        scanf("%d",&arr[0]);
        int loval = abs (arr[0] - e);
         p = 1;i=1;
   while (i++<b){
        scanf("%d",&arr[i]);
        if(abs(arr[i] - e) < loval){
        	loval = abs(arr[i] - e);
                p=i;
        }
    }
    printf("%d\n",p);
    }

    return 0;
}
