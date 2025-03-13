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

   
}
