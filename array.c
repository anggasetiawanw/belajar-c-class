#include <stdio.h>
const int maxNumber = 6;

int main() {
    int myNumber[maxNumber] = {1, 2, 3, 4, 5, 6};

    for (int i = 0; i < 6; i++) {
        printf("Ini Data aray ke %d => %d\n", i, myNumber[i]);
    }

    return 0;
}