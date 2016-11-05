#include <stdio.h>
int main(){
 int i,n,a,p=0,m=0;
  scanf("%d",&a);
 for(i=0;i<a;i++){
scanf("%d",&n);
if (n>=10 && n<=20)
  p++;       //count the positive number in the input value
else
    m++;

 }
  printf("%d in\n%d out\n",p,m);

return 0;
}



