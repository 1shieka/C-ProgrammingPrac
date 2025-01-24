//Develop C program to calculate an employee's monthly salary by taking the basic salary as input and calculating HRA and DA within a function.
#include <stdio.h>

int calsalary(int basicsalary) {
    float hra = 0.1 * basicsalary;
    float da = 0.2 * basicsalary;
    float totalsalary = basicsalary + hra + da;
    return totalsalary;
}

int main() {
    int basicsalary;
    float totalsalary;

    printf("Enter the basic salary: ");
    scanf("%d", &basicsalary);

    totalsalary = calsalary(basicsalary);
    printf("Total salary: %.2f\n", totalsalary);
    return 0;
}