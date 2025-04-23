#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i;
    long l;
    char c;
    float f;
    double d;
    
    // Read input
    scanf("%d %ld %c %f %lf", &i, &l, &c, &f, &d);
    
    // Print output
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%c\n", c);
    printf("%.3f\n", f);  // Float with 3 decimal places
    printf("%.9lf\n", d); // Double with 9 decimal places
    
    return 0;
}
