#include<stdio.h>

int main() {
    unsigned long int num, rem, count[10];

    scanf("%lu", &num);

    for(unsigned int i=0;i<10;i++)
        count[i] = 0;
    
    while(num > 0) {
        rem = num%10;
        num = num / 10;

        count[rem-1]++;
    }

    unsigned int max = count[0], maxIndex = 0;

    for(unsigned int i=1;i<10;i++) {
        if(count[i] > max) {
            max = count[i];
            maxIndex = i;
        }
    }

    printf("%u", maxIndex+1);

    
    return 0;
}