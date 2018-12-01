#include<stdio.h>

int main()
{
    long int n, m, x ,y;
    unsigned test;

    while(1)
    {
        scanf("%u", &test);
        if(test==0) break;
        scanf("%ld%ld", &n, &m);

        while(test)
        {
            scanf("%lu%lu", &x, &y);

            if(x<n && y>m) printf("NO");
            else if(x>n && y>m) printf("NE");
            else if(x>n && y<m) printf("SE");
            else if(x<n && y<m) printf("SO");
            else printf("divisa");
            printf("\n");
            test--;
        }

    }
    return 0;
}
