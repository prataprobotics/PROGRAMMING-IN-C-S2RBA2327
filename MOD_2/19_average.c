#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;
    
    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Input the elements
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        float num;
        scanf("%f", &num);
        sum += num;
    }
    
    // Calculate the average
    average = sum / n;
    
    // Display the result
    printf("Average = %.2f\n", average);
    
    return 0;
}
