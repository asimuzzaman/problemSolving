#include<stdio.h>

int main()
{
    char str[1000];
    int count, i, j, rem;

    while(gets(str))
    {
        count=0;
        rem =1;

        for(i=0;str[i]!= '\0';i++)
        {
            if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            {
                if(rem!=0) count++;
                rem = 0; /*rem =0 means a word has started*/
            }
            else rem = 1; /*rem =1 means a word has ended*/
        }

        printf("%d\n", count);
    }
    return 0;
}
