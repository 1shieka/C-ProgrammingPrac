// Write a C program to allow entry and display of an employee's details such as name, ID, department, and salary, using functions to handle the data.
#include <stdio.h>

void EmpInfo( char name[50], int id, char dept[20], int salary ) {
    printf("\nEmployee's Details\n");
    printf("Employee Name: %s\n", name);
    printf("Employee ID: %d\n", id);
    printf("Employee Department: %s\n", dept);
    printf("Employee Salary: %d\n", salary);
    printf("\n");

}
int main() {
    char name[50];
    int id;
    char dept[20];
    int salary;
   
    printf("Employee Name:");
    scanf("%s", &name);
    printf("Employee ID:");
    scanf("%d", &id);
    printf("Employee Department:");
    scanf("%s", &dept);
    printf("Employee Salary:");
    scanf("%d", &salary);
    
    EmpInfo(name,id,dept,salary);
    return 0;
}