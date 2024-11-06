#include <stdio.h>

int main() {
    float hours, wage, grossPay, taxes, netPay;
    
    // Request input from the user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);
    
    // Calculate gross pay
    if (hours > 40) {
        // Calculate overtime pay
        grossPay = (40 * wage) + ((hours - 40) * wage * 1.5);
    } else {
        // Regular pay
        grossPay = hours * wage;
    }
    
    // Calculate taxes based on gross pay
    if (grossPay <= 600) {
        taxes = grossPay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }
    
    // Calculate net pay
    netPay = grossPay - taxes;
    
    // Print the results
    printf("\nGross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);
    
    return 0;
}
