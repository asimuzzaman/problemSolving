#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,len,j,casenum;
    char str[105][105];
    casenum=1;
    while(1)
    {
        scanf("%d", &n);
        getchar();
        if(n==0) break;
        printf("Case %d:\n",casenum);
        casenum++;

        for(i=0;i<n;i++)
        {
            gets(str[i]);
        }

        printf("#include<string.h>\n#include<stdio.h>\nint main()\n{\n");

        for(i=0;i<n;i++)
        {
            printf("printf(\"");
            len = strlen(str[i]);
            for(j=0;j<len;j++)
            {
                if(str[i][j]== '"') { printf("\\"); printf("\""); }
                else if(str[i][j]=='\\') { printf("\\"); printf("\\"); }
                else printf("%c", str[i][j]);
            }
            printf("\\"); printf("n\");");
            printf("\n");
        }
        printf("printf(\"\\"); printf("n\");\n");
        printf("return 0;\n}\n");

    }
    return 0;
}
