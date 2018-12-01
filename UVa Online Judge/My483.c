#include<stdio.h>

int main()
{
    char str[1000];
    int i,j,k,start,end,temp,loop;

    while(gets(str))
    {
        for(i=0;;i++)
        {
            if(str[i-1]=='\0' && i!=0) break;

            if(str[i]== ' ') continue;
            else{
                start = i;
                for(j=i;;j++)
                {
                    if(str[j]==' ' || str[j]=='\0')
                    {
                        end = j-1;
                        break;
                    }
                    i++;
                }

                loop = start + (end-start)/2;
                for(k=start;k<=loop;k++)
                {
                    temp = str[k];
                    str[k] = str[end-k+start];
                    str[end-k+start] = temp;
                }
            }
        }
        puts(str);
    }

    return 0;
}
