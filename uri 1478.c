#include<stdio.h>
#include<math.h>

int main ()
{
    int n, i,j,k,l,lt;
    char tt[1000],dd[1000];
    while(scanf("%d",& n) && n!=0)
    {
             for(i=1;i<=n;i++)
            {
            	k=i;l=i-1;lt=2;
                for(j=1;j<=n;j++)
                {
                	if(j==1){
                	printf("%3d",i);
                	}else if(i==1){
                	printf(" %3d",j);
                	}
                	else{
                		if(i>2 && j>2){
                			l--;
                			if(l>0) {printf(" %3d",l);}
                	     	else {	printf(" %3d",lt); lt++;}

                		}
                		else{
                    	printf(" %3d",k-1);k++;}
                	}

                }
                printf("\n");
            }
          printf("\n");
        }

return 0;
}
