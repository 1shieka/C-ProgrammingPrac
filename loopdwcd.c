#include <stdio.h>
int main() {
    int num, count = 0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    do{
        if (num == 0) {
           count = 1;
           break;
        } else {  
           num/= 10; 
           count++; 
        }
    }
    while (num != 0);
       
    printf("Number of digits: %d\n", count);
    return 0;
}
