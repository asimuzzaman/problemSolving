#include<stdio.h>

int main()
{
    int tc, res, rem;
    long int num;

    scanf("%ld", &tc);

    while(tc)
    {
        scanf("%ld", &num);
        num*= 567;
        num/= 9;
        num+= 7492;
        num*= 235;
        num/= 47;
        num-= 498;

        num/= 10;
        rem = num/10;
        res = num - (rem*10);

        if(res<0) res*= -1;
        printf("%d\n", res);
        tc--;
    }
    return 0;
}
