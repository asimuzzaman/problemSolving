#include<stdio.h>

int main()
{
    long int arr[1000];

    int count, tc, size, i, j;
    long int temp;

    scanf("%d", &tc);

    while(tc!=0)
    {
        count = 0;
        scanf("%d", &size);

        for(i=0;i<size;i++) scanf("%ld", &arr[i]);

        for(i=0;i<size;i++)
        {
            for(j=i+1;j<size;j++)
            {
                if(arr[i]>arr[j])
                {
                    count++;
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", count);
        tc--;
    }
    return 0;
}
