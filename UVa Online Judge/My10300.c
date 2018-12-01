#include<stdio.h>

int main()
{
    double yard, animal, env, total;
    unsigned i, j, tc, farm;

    scanf("%u", &tc);

    for(i=0;i<tc;i++)
    {
        total=0.0;
        scanf("%u", &farm);
        for(j=0;j<farm;j++)
        {
            scanf("%lf%lf%lf", &yard, &animal, &env);
            total+= yard*env;
        }
        printf("%d\n", (int)total);
    }

    return 0;
}
