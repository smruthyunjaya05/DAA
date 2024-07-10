#include <stdio.h>
int main() {
    int decimalNum,c;
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);
    while(decimalNum> 0)
    {
        decimalNum/=2;
        c++;
    }
    printf("Number of bits required: %d\n", c);
    return 0;
}
