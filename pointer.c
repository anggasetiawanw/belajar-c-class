#include <stdio.h>

/*
POinter itu ada 2
1. Pass by reference => nilai yang di reference akan mengikuti nilai yang ngereference
2. Pass by value => mencopy doang dari nilai yang di pointer

*/

int main() {
    int a = 10;
    int np = a;
    printf("a : %d\n", a);
    printf("np : %d\n", np);
    int *p = &a;
    printf("p : %d\n", *p);
    printf("np : %d\n", np);
    *p = 1;
    printf("a : %d\n", a);
    printf("p : %d\n", *p);
    printf("np : %d\n", np);
    a = 9;
    printf("a : %d\n", a);
    printf("p : %d\n", *p);
    printf("np : %d\n", np);
    
    return 0;
}