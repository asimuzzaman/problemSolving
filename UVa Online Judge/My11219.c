#include<stdio.h>

int main()
{
    int i, tc, c_d, c_m, c_y, b_d, b_m, b_y, age;
    char ajaira;

    scanf("%d", &tc);

    for(i=1;i<=tc;i++)
    {
        scanf("%c", &ajaira);
        scanf("%d%c%d%c%d", &c_d, &ajaira, &c_m, &ajaira, &c_y);
        scanf("%d%c%d%c%d", &b_d, &ajaira, &b_m, &ajaira, &b_y);

        if(c_y >= b_y)
        {
            if(c_m > b_m) age = c_y-b_y;
            else if(c_m == b_m && c_d >= b_d) age = c_y-b_y;
            else age = c_y - b_y -1;
        }
        else if(c_y < b_y) age = -1;

        if(age<0) printf("Case #%d: Invalid birth date\n", i);
        else if(age>130) printf("Case #%d: Check birth date\n", i);
        else printf("Case #%d: %d\n", i, age);
    }
    return 0;
}
