#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C,root,R1,R2;

    scanf("%lf %lf %lf",&A,&B,&C);

    root=sqrt(B*B-4*A*C);
    R1=(-B+root)/(2*A);
    R2=(-B-root)/(2*A);

  if(A!=0 && root>0)
{
    printf("R1 = %.5lf\nR2 = %.5lf\n",R1,R2);
}
else{
    printf("Impossivel calcular\n");
}


    return 0;
}

