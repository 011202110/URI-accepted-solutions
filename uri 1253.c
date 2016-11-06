#include<stdio.h>
#include<string.h>

int main()
{
    int a,b,c,i,d=0;
    char s2[100]={'\0'};
    char st[100]={'\0'};
    char *pa;
    scanf("%d",&a);

    while(a--){
        scanf("%s",s2);
         scanf("%d",&c);
        for(i=0;i<strlen(s2);){
                if (i!=strlen(s2)){
                if(s2[i]-c >64){
                 s2[i] = s2[i] - c;
                }else{
                    d = s2[i] - 65;
                    s2[i] = 91 - (c-d);
                }
            }else{
                break;
            }
            i++;
        }
         printf("%s\n",s2);
    }
    return 0;
}

