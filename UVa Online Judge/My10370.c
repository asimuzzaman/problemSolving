#include<stdio.h>

int main()
{
    int i,tc,j,grade[1005];
    float avg,count,sum,num,above;

    scanf("%d",&tc);

    for(i=0;i<tc;i++)
    {
        scanf("%f", &num);
        sum=0.0;
        count=0.0;
        avg=0.0;
        for(j=0;j<num;j++)
        {
            scanf("%d", &grade[j]);
            sum+= grade[j];
        }
        avg = sum/num;
        for(j=0;j<num;j++) if(grade[j]>avg) count++;
        above = (100*count)/num;

        printf("%.3f%%\n", above);
    }

    return 0;
}
