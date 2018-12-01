#include<stdio.h>

int main()
{
    int tc,h,m;

    scanf("%d", &tc);

    while(tc)
    {
        tc--;
        scanf("%d:%d", &h, &m);

        h= 11-h+(m==0);
        if(h<=0) h+= 12;
        if(m!=0) m= 60-m;

        printf("%02d:%02d\n", h, m);
    }
    return 0;
}
