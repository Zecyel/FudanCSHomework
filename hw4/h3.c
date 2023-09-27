#include <stdio.h>
#include <math.h>

double f(double x) {
    return exp(x * x);
}

double SimponIntegral(double a, double b) {
    double l = f(a);
    double r = f(b);
    double mid = (a + b) / 2;
    double m = f(mid);
    return (l + 4 * m + r) / 6 * (b - a);
}

double Integral(double a, double b, double err) {
    double mid = (a + b ) / 2;
    if (fabs(SimponIntegral(a, b) - SimponIntegral(a, mid) - SimponIntegral(mid, b)) < err)
        return SimponIntegral(a, b);
    return Integral(a, mid, err / 2) + Integral(mid, b, err / 2);
}

int main() {
    printf("%f", Integral(0, 1, 0.000001));
    return 0;
}