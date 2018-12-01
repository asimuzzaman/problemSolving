#include<stdio.h>
#include<string.h>

int main()
{
    char name1[30], name2[30];
    int i, len1, len2, sum1, sum2, sum, temp;

    while(gets(name1) && gets(name2))
    {
        sum1=0; sum2=0;
        len1= strlen(name1);
        len2= strlen(name2);

        for(i=0;i<len1;i++)
        {
            if(name1[i]>='A'&&name1[i]<='Z')
            {
                sum1+= name1[i]-64;
            }
            else if(name1[i]>='a'&&name1[i]<='z')
            {
                sum1+= name1[i]-96;
            }
        }

        for(i=0;i<len2;i++)
        {
            if(name2[i]>='A'&&name2[i]<='Z')
            {
                sum2+= name2[i]-64;
            }
            else if(name2[i]>='a'&&name2[i]<='z')
            {
                sum2+= name2[i]-96;
            }
        }
        while(sum1>=10)
        {
            sum= 0;
            temp = sum1;
            while(temp)
            {
                sum+= temp%10;
                temp/= 10;
            }
            sum1 = sum;
        }
        while(sum2>=10)
        {
            sum= 0;
            temp = sum2;
            while(temp)
            {
                sum+= temp%10;
                temp/= 10;
            }
            sum2 = sum;
        }

        if(sum2>=sum1) printf("%.2f %%\n", ((float)sum1/(float)sum2)*100.0);
        else printf("%.2f %%\n", ((float)sum2/(float)sum1)*100.0);
    }
    return 0;
}
