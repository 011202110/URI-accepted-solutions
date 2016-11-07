#include<stdio.h>
#include<math.h>

int main ()
{
    int n, i,j,max=0,count=0,k,l,m,b,lt;
    char tt[1000],dd[1000];
    while(scanf("%d",& n) && n!=0)
    {
    	count = 0,max=0,l=0,lt=0;
    	max = pow(2, n + n - 2);
    	sprintf(tt, "%d", max);
    	for(k=0;tt[k]!='\0';k++)count++;

             for(i=1;i< pow(2,n);i=i*2)
            {
                for(j=1;j<pow(2,n);j=j*2)
                {
                	l=0,lt=0;
                	sprintf(dd, "%d", i*j);
                for(b=0;dd[b]!='\0';b++)l++;
                lt = l ;
                l = count - lt;
                if(l!=count){
                for(m=0;m<l;m++)printf(" ");
                }
                if(j==1)
                printf("%d",i*j);
                else
                printf(" %d",i*j);
                }
                printf("\n");
            }
          printf("\n");
        }

return 0;
}
