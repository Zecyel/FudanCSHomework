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
            solution[0] = sol1;
            solution[1] = sol2;
        } else {
            solution[0] = sol2;
            solution[1] = sol1;
        }
    }
}
