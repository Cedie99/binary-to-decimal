#include <stdio.h>


int main ()
{
    int binary, decimal = 0, weight = 1, rem;

    printf("Enter binary number to decimal: ");
    scanf("%d", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * weight;
        weight *=2;
        binary /= 10;
    }

    printf("Decimal equivalent is: %d", decimal);


    return 0;
}