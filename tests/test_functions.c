#include <stdio.h>
#include "functions.h"

int main() {
    int total_tests = 2;
    int passed_tests = 0;

    if (add(2, 3) == 5) {
        passed_tests++;
    } else {
        printf("Test Failed: add(2,3) != 5\n");
    }

    if (multiply(2, 3) == 6) {
        passed_tests++;
    } else {
        printf("Test Failed: multiply(2,3) != 6\n");
    }

    float coverage = (passed_tests / (float)total_tests) * 100;
    printf("Test Coverage: %.2f%%\n", coverage);

    if (coverage < 75.0) {
        printf("❌ Test Coverage below 75%%. Tests failed.\n");
        return 1;
    } else {
        printf("✅ Test Coverage sufficient.\n");
        return 0;
    }
}
