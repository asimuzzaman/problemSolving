#include<stdio.h>

void main()
{
    unsigned i, tc, total, n1, n2;

    scanf("%u", &tc);

    for(i=1;i<=tc;i++)
    {
        scanf("%u", &total);
        if(total<=10) printf("0 %u\n", total);
        else
        {
            n1 = total - 10;
            printf("%u 10\n", n1);
        }
        }
}
