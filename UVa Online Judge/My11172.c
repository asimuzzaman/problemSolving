#include<stdio.h>

int main()
{
    unsigned long int a, b;
    int tc;

    scanf("%d", &tc);

    while(tc!=0)
    {
        scanf("%lu%lu", &a, &b);

        if(a<b) printf("<");
        else if(a>b) printf(">");
        else printf("=");
        printf("\n");
        tc--;
    }
    return 0;
}
