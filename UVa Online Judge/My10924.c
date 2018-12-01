#include<stdio.h>
#include<string.h>

int main()
{
    char str[25];
    int i, len, sum, isprime;

    while(gets(str))
    {
        sum =0;
        len = strlen(str);

        for(i=0;i<len;i++)
        {
           if(str[i]>='A' && str[i]<='Z') sum+= str[i]-38;
           else if(str[i]>='a' && str[i]<='z') sum+= str[i] - 96;
        }
        isprime = 1;
        for(i=2;i<=sum/i;i++)
        {
            if(sum%i==0)
            {
                isprime = 0;
                break;
            }
        }
        if(isprime==1) printf("It is a prime word.\n");
        else printf("It is not a prime word.\n");
    }
    return 0;
}
