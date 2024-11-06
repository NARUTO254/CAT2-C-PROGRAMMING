#include <stdio.h>

// Define the structure 'employee'
struct employee {
    char name[25];       // Name of the employee (string of 25 characters)
    int id;              // Employee ID (integer)
    char department[20]; // Department (string of 20 characters)
    float salary;        // Salary (float)
    char email[50];      // Email (string of 50 characters)
};

int main() {
    // Declare and initialize a variable of type 'employee'
    struct employee emp = {
        "John Doe",          // Name
        12345,               // ID
        "Human Resources",   // Department
        55000.50,            // Salary
        "john.doe@Company.com" // Email
    };

    // Print the details of the employee
    printf("Employee Details:\n");
    printf("Name: %s\n", emp.name);
    printf("ID: %d\n", emp.id);
    printf("Department: %s\n", emp.department);
    printf("Salary: %.2f\n", emp.salary);
    printf("Email: %s\n", emp.email);

    return 0;
}
