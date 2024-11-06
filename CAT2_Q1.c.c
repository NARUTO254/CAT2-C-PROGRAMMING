#include <stdio.h>

// Define the structure 'employee'
struct employee {
    char name[25];       
    int id;              
    char department[20]; 
    float salary;      
    char email[50];      
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
