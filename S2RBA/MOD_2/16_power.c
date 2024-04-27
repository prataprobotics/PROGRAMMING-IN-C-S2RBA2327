#include <stdio.h>
#include <math.h>

int main() {
    double x;
    float n;

    // Input the value of x
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    printf("Enter the value of n: ");
    scanf("%f", &n);

    // Calculate x^x
    double result = exp(n * log(x));
    double powfu = pow(x,n);
    // Print the result
    printf("%.2lf^%.2lf = %.2lf\n", x, n, result);
    printf("%.2lf^%.2lf = %.2lf\n", x, n, powfu);

    return 0;
}
