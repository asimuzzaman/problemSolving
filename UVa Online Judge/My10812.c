#include<stdio.h>

int main()
{
    int i, tc, sum, dif,a,b;

    scanf("%d", &tc);

    for(i=0;i<tc;i++)
    {
        scanf("%d%d", &sum, &dif);

        if(sum>=dif && (sum+dif)%2==0)
        {
            a= (sum+dif)/2;
            b= sum-a;
            if(a>b) printf("%d %d\n", a, b);
            else printf("%d %d\n", b, a);
        }
        else printf("impossible\n");
    }

    return 0;
}
