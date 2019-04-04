#include<stdio.h>

int main() {
    unsigned int num1, num2, t;

    scanf("%u", &t);

    for(unsigned int i=0;i<t;i++) {
        scanf("%u %u", &num1, &num2);

        num1 = (num1+num2)/2;

        if(num1 % 2 == 0)
            printf("Sadia will be happy.\n");
        else
            printf("Oops!\n");
    }
    return 0;
}