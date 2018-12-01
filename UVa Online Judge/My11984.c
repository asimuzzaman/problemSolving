#include<stdio.h>

int main()
{
    int i, tc;
    double c, d, res, f;

    scanf("%d", &tc);

    for(i=1;i<=tc;i++)
    {
        scanf("%lf%lf", &c, &d);
        f = 9*c/5+d;
        res = f*5/9;

        printf("Case %d: %.2lf\n", i,res);
    }
    return 0;
}
