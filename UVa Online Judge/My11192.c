#include<stdio.h>
#include<string.h>

int main()
{
    int grp, i, j, len, num, start, end, loop_end;
    char str[1000], temp, ajaira;

    while(1)
    {
        scanf("%d%c", &grp,&ajaira);

        if(grp == 0) break;
        gets(str);
        len= strlen(str);

        num = len/grp;

        i=0;
        while(i<len)
        {
            start = i;
            end= i+num-1;
            i= end+1;

            loop_end= start + (end-start)/2;

            for(j=start;j<=loop_end;j++)
            {
                temp = str[j];
                str[j] = str[end-j+start];
                str[end-j+start] = temp;
            }
        }
        puts(str);
    }
    return 0;
}
