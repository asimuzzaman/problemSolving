#include<stdio.h>

int main()
{
    int start,end,i,j,tc,sum;

    scanf("%d", &tc);

    for(i=1;i<=tc;i++)
    {
        sum=0;
        scanf("%d%d", &start, &end);

        for(j=start;j<=end;j++)
        {
            if(j%2!=0) sum+= j;
        }

        printf("Case %d: %ld\n", i,sum);
    }
    return 0;
}
