#include<stdio.h>

int main()
{
    char ch;
    int len, i, odd=0;

    while(scanf("%c", &ch)==1)
    {
        if(ch == '"')
        {
            odd++;
            if(odd%2!=0) printf("``");
            else printf("''");
        }
        else printf("%c", ch);
    }
    return 0;
}
