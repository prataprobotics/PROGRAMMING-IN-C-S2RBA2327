#include <stdio.h>
#include <math.h>

double calculate_y(int x, int n) {
    double result;

    if (n == 1)
        result = x*x + 3*x + 1;
    else if (n == 2)
        result = (double)n / x;
    else if (n == 3)
        result = pow(x, n);
    else
        result = 0;

    return result;
}

int main() {
    int x, n;
    double y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of n: ");
    scanf("%d", &n);

    y = calculate_y(x, n);

    printf("y(%d, %d) = %lf\n", x, n, y);

    return 0;
}
