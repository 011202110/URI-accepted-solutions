#include <stdio.h>
#include <string.h>
#define N 10000
 int main()

{

char num1[N],num2[N];

int  i, len1,len2,bl,j=0,t=0,l,c1;


while(scanf("%s",num1)!=EOF){

scanf("%d",&c1);

len1 = strlen(num1);

i=len1-1;
printf("$");
for(j=0;j<len1;j++){
        if(i%3==0 && j!=len1-1 && i!=0)
            printf("%c,",num1[j]);
         else
            printf("%c",num1[j]);
            i--;
}
if(c1<10)
    printf(".0%d\n",c1);
    else
        printf(".%d\n",c1);
}
return 0;
}
