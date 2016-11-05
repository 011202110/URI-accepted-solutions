#include<stdio.h>

int main()
{
    float a,b,c,d,e,avg;
     scanf("%f %f %f %f",&a,&b,&c,&d);

     avg=(a*2+b*3+c*4+d*1)/10;

     printf("Media: %.1f\n",avg);


   if( avg > 7.0)
        printf("Aluno aprovado.\n");

   if(avg<5.0)
        printf("Aluno reprovado.\n");

   if(avg>=5.0 && avg <=6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&e);
        printf("Nota do exame: %.1f\n", e);

        if((avg+e)/2.0>=5.0)
            printf("Aluno aprovado.\n");
        else
           printf("Aluno reprovado.\n");

        printf("Media final: %.1f\n",(avg+e)/2.0);
    }

        return 0;
}

