#include<stdio.h>

int main()
{
    long int d1, d2,c, count,m1,m2,s,length,b;
    while(scanf("%ld %ld",&d1, &d2))
    {
        if(d1==0 && d2==0)
            break;
        if(d1>d2)
            b=d1;
        else
            b=d2;
        length=0;
        while(b!=0)
        {
            b/=10;
            length++;
        }
        count=0;
        c=0;
        while(length!=0)
        {
            m1=d1%10;
            d1=d1/10;
            m2=d2%10;
            d2=d2/10;
            s=m1+m2+c;

            if(s>9)
            {
                count++;
                c=s/10;
            }
            else
                c=0;
            length--;
        }

            if(count==0)
                printf("No carry operation.\n");
            else if(count==1)
               printf("1 carry operation.\n");
            else
                printf("%ld carry operations.\n",count);
    }

    return 0;
}

