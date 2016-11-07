#include<stdio.h>
#include<string.h>

int main()
{
      float  amt,avgtk,avgkg,total=0.0,t1;
      int day;
      int i,a,count=0,l;
      char name[10000];


            while(scanf("%d",&day)==1){
                  total=0.0;
                  count=0;
                  a=0;
                  t1=0;
                  for(l=1;l<=day;l++){
                              scanf("%f",&amt);
                              total=amt+total;
                              scanf(" %[^\n]s",name);

                          for(i = 0; name[i] != '\0'; i++){
                              if(name[i] == 32)
                               count++;
                          }
                                    a=count+1;
                                    printf("day %d: %d kg\n",l,a);
                                    t1=a+t1;
                                    count=0;
                  }
                  avgtk=  (float)  (total/day);

                  avgkg=(float) (t1/day);
                  printf("%.2f kg by day\n",avgkg);
                  printf("R$ %.2f by day\n",avgtk);


            }

      return 0;
}
