#include<stdio.h>

int main()
{
    long long num=1,i;

    while(scanf("%lld",&num)==1)
    {
        if(num<0 && (num%2)==0) printf("Underflow!\n");
        else if(num<0 && (num%2)!=0) printf("Overflow!\n");
        else if(num>=0 && num<8) printf("Underflow!\n");
        else if(num>=8 && num<13)
        {
            for(i=num-1;i>0;i--) num*= i;
            printf("%lld\n",num);
        }
        else if(num==13) printf("6227020800\n");
        else printf("Overflowtest!\n");
    }

    return 0;
}
