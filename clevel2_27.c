// Question: Write a program to print the total count of numbers
// which are less than 100000 and whose sum of digits is 14.
#include <stdio.h>
/*Function Declaration*/
int sumOfDigits(int num);
int main() {
    int count = 0;

    // Iterate through all numbers less than 100000
    for (int i = 0; i < 100000; i++) {
        // Check if the sum of digits is 14
        if (sumOfDigits(i) == 14) {
            count++;
        }
    }

    // Print the total count
    printf("Total count of numbers less than 100000 whose sum of digits is 14: %d\n", count);

    return 0;
}
/*Function Defination*/
// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}
