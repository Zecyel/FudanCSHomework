#include <stdio.h>
#include <math.h>

void SolveQuadraticEquation(float a, float b, float c, int *numSolutions, float *solution) {
    float discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        *numSolutions = 0;
        return;
    } else if (discriminant == 0) {
        *numSolutions = 1;
        solution[0] = -b / 2 / a;
    } else {
        float sol1 = (-b + sqrt(discriminant)) / 2 / a;
        float sol2 = (-b - sqrt(discriminant)) / 2 / a;
        *numSolutions = 2;
        if (sol1 > sol2) {
            solution[0] = sol2;
            solution[1] = sol1;
        } else {
            solution[0] = sol1;
            solution[1] = sol2;
        }
    }
}

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
