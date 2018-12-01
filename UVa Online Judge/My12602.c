#include<stdio.h>

int main()
{
    char letter[4], ajaira;
    int n, digit, sum;

    scanf("%d", &n);
    getchar();

    while(n)
    {
        sum =0;
        scanf("%c%c%c-%d", &letter[0],&letter[1],&letter[2],&digit);
        getchar();

        letter[0] -= 65;
        letter[1] -= 65;
        letter[2] -= 65;

        sum = letter[0]*26*26 + letter[1]*26 + letter[2]*1;
        sum-= digit;
        if(sum<0) sum*= -1;
        if(sum<=100) printf("nice\n");
        else printf("not nice\n");
        n--;
    }
    return 0;
}
