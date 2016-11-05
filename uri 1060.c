#include <stdio.h>
int main(){
 int i,p=0;
 float n;
// scanf("%d",&a);
 for(i=0;i<6;i++){
scanf("%f",&n);
if (n>0)
  p++;       //count the positive number in the input value
 }
  printf("%d valores positivos\n",p);

return 0;
}


