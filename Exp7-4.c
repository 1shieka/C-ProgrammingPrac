#include <stdio.h>
int main() {
    int num, rev = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    printf("Reversed number: %d\n", rev);
    printf("Vanshika Rawat 590013163\n");
    return 0;
}