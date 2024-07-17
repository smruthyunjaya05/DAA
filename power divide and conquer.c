#include <stdio.h>
#include <time.h>

// Function to compute a to the power n using divide-and-conquer
int power(int a, int n) {
    if (n == 0) {
        return 1;
    } else if (n % 2 == 0) {
        int temp = power(a, n / 2);
        return temp * temp;
    } else {
        int temp = power(a, (n - 1) / 2);
        return a * temp * temp;
    }
}

// Function to add a delay
void delay(int milliseconds) {
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}

int main() {
    int a, n;
    printf("*****DIVIDE AND CONQUER*****\n");
    printf("AUTHOR: MRUTHYUNJAYA S \n");
    printf("DATE: 17/7/2024\n");
    printf("****************\n\n\n");
    printf("Enter the base (a): ");
    scanf("%d", &a);
    printf("Enter the exponent (n): ");
    scanf("%d", &n);

    clock_t start, end;
    double time_taken;

    start = clock();
    delay(2000); // Add a delay of 2000 milliseconds (2 seconds)
    int result = power(a, n);
    end = clock();

    time_taken = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Time taken: %f seconds\n", time_taken);

    printf("%d to the power %d is %d\n", a, n, result);

    return 0;
}
