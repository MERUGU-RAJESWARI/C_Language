#include <stdio.h>
#include "functions.h"

int main() {
    int total_tests = 5;
    int passed_tests = 0;

    // Test Case 1: Basic Addition
    if (add(2, 3) == 5) {
        passed_tests++;
    } else {
        printf("Test Failed: add(2,3) != 5\n");
    }

    // Test Case 2: Basic Multiplication
    if (multiply(2, 3) == 6) {
        passed_tests++;
    } else {
        printf("Test Failed: multiply(2,3) != 6\n");
    }

    // Test Case 3: Addition with Zero
    if (add(0, 7) == 7) {
        passed_tests++;
    } else {
        printf("Test Failed: add(0,7) != 7\n");
    }

    // Test Case 4: Multiplication with Zero
    if (multiply(9, 0) == 0) {
        passed_tests++;
    } else {
        printf("Test Failed: multiply(9,0) != 0\n");
    }

    // Test Case 5: Addition with Negative Numbers
    if (add(-5, -7) == -12) {
        passed_tests++;
    } else {
        printf("Test Failed: add(-5,-7) != -12\n");
    }

    printf("Passed %d/%d tests\n", passed_tests, total_tests);
    return 0;
}
