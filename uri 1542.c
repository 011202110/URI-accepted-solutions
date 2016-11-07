#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,re;

   while (scanf("%d",&a) && a!=0){
   	re = 0;
       scanf("%d %d",&b,&c);
       re = trunc((double)(a*b) / -(a-c) *c);
       if(re!=1)
      printf("%d paginas\n",re);
      else
        printf("%d pagina\n",re);
   }
   return 0;
}
