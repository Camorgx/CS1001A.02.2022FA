#include <stdio.h>
#include <math.h>

#define equal(a, b) (fabs((a) - (b)) < 1e-5) 

int main(void) {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a + b <= c || b + c <= a || c + a <= b) {
        puts("Error");
        return 0;
    }
    double p = (a + b + c) / 2;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Area: %g\n", S);
    printf("Attributes: ");
    if (equal(a, b) || equal(b, c) || equal(c, a)) {
        if (equal(a, b) && equal(b, c)) {
            puts("equilateral");
            return 0;
        }
        else printf("isosceles ");
    }
    if (equal(a * a + b * b, c * c) || equal(b * b + c * c, a * a) 
        || equal(c * c + a * a, b * b)) {
        puts("right-angled");
    }
    return 0;
}
