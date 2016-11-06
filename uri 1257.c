#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,i,d=0,j,sum=0;
    char s2[100];
    char *pa;
    scanf("%d",&a);
    while(a--){
            sum=0;
         scanf("%d",&c);
for(j=0;j<c;j++){
        scanf("%s",s2);
        for(i=0;i<strlen(s2); i++){
            sum+= s2[i]- 65 + i +j ;

        }
}
         printf("%d\n",sum);
    }
    return 0;
}

