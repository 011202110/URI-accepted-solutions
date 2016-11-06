#include<stdio.h>

int main()
{   int n,i,a,c = 0,ind[1000],p;
    float gr[1000],b,max;

    scanf("%d",&n);

    for(i=0;i<n;i++){
            scanf("%d %f",&a,&b);
                  ind[i]=a;
                  gr[i]=b;
                  if(gr[i]>= 8){
                    if(max<gr[i]){
                        max=gr[i];
                        p = i;
                        //printf("%.2f \t %.2f",max,gr[i]);
                    }
                    c=1;
                  }
    }
    if(c == 1){
      printf("%d\n",ind[p]);
    }
    else{
      printf("Minimum note not reached\n");
    }

    return 0;
}


