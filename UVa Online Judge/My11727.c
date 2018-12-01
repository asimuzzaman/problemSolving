#include<stdio.h>

int main()
{
    int tc, sal1, sal2, sal3, i;

    scanf("%d", &tc);

    for(i=1;i<=tc;i++)
    {
        scanf("%d%d%d", &sal1, &sal2, &sal3);
        printf("Case %d: ", i);
        if((sal1>sal2 && sal1<sal3) || (sal1<sal2 && sal1>sal3)) printf("%d", sal1);
        else if((sal2>sal1 && sal2<sal3) || (sal2<sal1 && sal2>sal3)) printf("%d", sal2);
        else if((sal3>sal1 && sal3<sal2) || (sal3<sal1 && sal3>sal2)) printf("%d", sal3);
        printf("\n");
    }
    return 0;
}
