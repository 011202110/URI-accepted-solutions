#include <stdio.h>
int main(){
char ch;
while(scanf("%c",&ch) != EOF){
if(ch >= 97 && ch <=122){
if(ch + 13 > 122)
    printf("%c",ch - 13);
else
    printf("%c",ch + 13);
                  }
else if(ch >= 65 && ch <=90){
if(ch + 13 > 90)
printf("%c",ch - 13);
else
printf("%c",ch + 13);
                  }
else
printf("%c",ch);
    }
return 0;
}
