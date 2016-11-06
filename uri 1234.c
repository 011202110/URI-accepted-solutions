#include <stdio.h>
#include <string.h>

void encrypt()
{
    int i,j,k,l,m,n;
    char password[100];
    while(gets(password)!=NULL){
            k = strlen(password);
            n=0;
    for(i=0;i<k;++i)
    {

        if(password[i]!=' '){
            n++;
          if(n%2!=0){
            if(password[i]>='a' && password[i]<='z')
              password[i] = password[i]- 32 ;
            else
              password[i] = password[i];
       }else{
         if(password[i]>='A' && password[i]<='Z')
             password[i] = password[i] + 32 ;
         else
             password[i] = password[i];
             }
         }
    }
   printf("%s\n",password);
  }
}

int main(void)
{
    encrypt();

}

