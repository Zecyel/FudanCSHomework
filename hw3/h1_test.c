#include <stdio.h>
#include "h1.c"

void pretty_print(int sol_count, float sol[2]) {
    if (sol_count == 0) {
        printf("No solution.\n");
    } else if (sol_count == 1) {
        printf("One solution: %f.\n", sol[0]);
    } else
        printf("Two solutions: %f, %f.\n", sol[0], sol[1]);
}

int main() {
    int sol_count;
    float sol[2];
    SolveQuadraticEquation(1, 2, 1, &sol_count, sol);
    pretty_print(sol_count, sol);
    SolveQuadraticEquation(1, 1, 1, &sol_count, sol);
    pretty_print(sol_count, sol);
    SolveQuadraticEquation(1, 2, 0, &sol_count, sol);
    pretty_print(sol_count, sol);
    SolveQuadraticEquation(-1, -2, 0, &sol_count, sol);
    pretty_print(sol_count, sol);
    return 0;
}
