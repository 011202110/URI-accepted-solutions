#include<stdio.h>
#include<string.h>
int main() {

    int d,d1,d2,d3,i;
    char s1[100];
   while(scanf("%s",&s1)!=EOF){
        if(s1[1]!='x'){
                d = atoi(s1);
    if(d<0) {
    	return 0;
    }
   printf("0x%X\n",d);

}else{
    printf("%d\n",strtol(s1,0,16));
}
        }
    return 0;
}
