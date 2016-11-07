#include<stdio.h>
#include<math.h>

int main()
{
    int a,c,re;
    long long int b;
   scanf("%d",&a);
   while (a--){
       scanf("%lld",&b);
       if(b==1){
       	printf("%lld\n",b);
       }else if(b%2==0){
       	printf("%lld\n",b/2);
       }else{
       	printf("%lld\n",(b/2)+1);
       }

   }
   return 0;
}
