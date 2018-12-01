#include<stdio.h>
#include<string.h>

int main()
{
    unsigned i, j, tc, paid, price[105], len;
    unsigned long int line;
    char str[10005], paidc[105], ajaira;
    double pay;

    scanf("%u", &tc);

    while(tc)
    {
        pay= 0.0;
        scanf("%u", &paid);
        getchar();

        for(i=0;i<paid;i++)
        {
            scanf("%c%c%u%c", &paidc[i], &ajaira, &price[i], &ajaira);
        }

        scanf("%lu", &line);
        getchar();
        while(line)
        {
            gets(str);
            len = strlen(str);

            for(i=0;i<len;i++)
            {
                for(j=0;j<paid;j++)
                {
                    if(str[i]==paidc[j]) pay+= (double)price[j];
                }
            }
            line--;
        }
        printf("%.2lf$\n", pay/100.0);
        tc--;
    }
    return 0;
}
