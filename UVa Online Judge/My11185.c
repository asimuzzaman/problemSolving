#include<stdio.h>

int main()
{
    long long int num=0;
    int arr[30], i;

    while(1)
    {
        scanf("%lld", &num);
        if(num<0) break;
        else if(num==0) printf("0\n");
        else{
        for(i=0;num!=0;i++)
        {
            arr[i]= num%3;
            num/= 3;
        }
        i--;
        while(i>=0)
        {
            printf("%d", arr[i]);
            i--;
        }
        printf("\n");
        }
    }


    return 0;
}
