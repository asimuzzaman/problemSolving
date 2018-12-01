#include<stdio.h>
#include<math.h>

int main()
{
    unsigned long int start, end, i, count, num;
    double srd;

    while(1)
    {
        count = 0;
        scanf("%lu%lu", &start, &end);
        if(start==0 && end==0) break;

        for(i=start;i<=end;i++)
        {
            srd = sqrt(i);
            num = (double) srd;

            if(num == srd) count++;
        }
        printf("%lu\n", count);
    }

    return 0;
}
