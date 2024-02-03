#include <stdio.h>

void changeValue(int value, int* reference, int arr[]) {
    value = 10;
    *reference = 10;
    arr[0] = 10;
}

int main() {
    int a = 1;
    int b = 1;
    int arrs[] = {1, 2, 3};
    printf("ini angka arr : %d\n", arrs[0]);
    changeValue(a, &b, arrs);
    printf("ini angka a : %d\n", a);
    printf("ini angka b : %d\n", b);
    printf("ini angka arr : %d\n", arrs[0]);

    return 0;
}