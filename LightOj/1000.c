#include<stdio.h>

int main()
{
    int i, tc, n1, n2;

    scanf("%d", &tc);

    for(i=1;i<=tc;i++)
    {
        scanf("%d%d", &n1, &n2);
        printf("Case %d: %d\n", i, n1+n2);
    }
}
