#include<stdio.h>
#include<string.h>

int main()
{
    char str[105][105];
    int row=0, maxlen=0, len, i, j;

    for(i=0;i<105;i++)
    {
        for(j=0;j<105;j++) str[i][j]= ' ';
    }

    while(gets(str[row]))
    {
        len = strlen(str[row]);

        if(len>maxlen) maxlen = len;
        str[row][len] = ' ';
        row++;
    }

    for(j=0;j<maxlen;j++)
    {
        for(i=row-1;i>=0;i--) printf("%c", str[i][j]);
        printf("\n");
    }

    return 0;
}
