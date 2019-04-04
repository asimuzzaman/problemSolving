#include<stdio.h>

int main() {
    unsigned short int child, choco, rem;

    while(scanf("%hu %hu", &child, &choco) == 2){
        rem = choco % child;

        printf("%hu\n", child-rem);
    }
    return 0;
}