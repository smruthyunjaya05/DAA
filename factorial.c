#include <stdio.h>

int main() {
    int n, fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while (n > 0)
    {
        fact=fact*n;
        n=n-1;
    }
    printf("%d",fact);
    return 0;
}
