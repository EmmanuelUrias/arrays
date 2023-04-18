#include <stdio.h>

int main()
{
    // Array = a data structure that can store many values of the same data type.

    float prices[10] = {1.0, 2.0, 3.0, 4.0, 4.50};

    prices[5] = 5.0;
    prices[6] = 10.0;
    prices[7] = 15.0;
    prices[8] = 25.0;
    prices[9] = 20.0;

    char name[] = "Emmanuel";

    printf("$%.2f\n$%.2f", prices[0], prices[7]);

    return 0;
}