#include<stdio.h>

int main()
{
    int i, tc;
    long a,b,c;

    scanf("%d", &tc);

    for(i=1;i<=tc;i++)
    {
        scanf("%ld%ld%ld", &a,&b,&c);

        if(a+b>c && b+c>a && c+a>b)
        {
            if(a==b && b==c && c==a) printf("Case %d: Equilateral\n", i);
            else if(a==b || b==c || c==a) printf("Case %d: Isosceles\n", i);
            else printf("Case %d: Scalene\n", i);
        }
        else printf("Case %d: Invalid\n", i);
    }
    return 0;
}
