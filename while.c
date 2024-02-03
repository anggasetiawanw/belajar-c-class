#include <stdbool.h>
#include <stdio.h>

int main() {
    // bool berjalan = true;
    // int i = 0;
    // printf("ini pake while biasa\n");
    // while (true)  // akan bekerja jika kondis terpenuhi. jika sudah tidak pernuhi akan berhenti
    // {
    //     /* code */
    //     printf("berjalan ke : %d \n", i);
    //     if (i > 5) {
    //         berjalan = false;  // sudah tidak terpenuhi
    //     }
    //     i++;

    // }
    // i = 0;
    // berjalan = false;

    // printf("ini pake whiledo biasa\n");
    // do {
    //     /* code */
    //     printf("berjalan ke : %d \n", i);
    //     if (i > 5) {
    //         berjalan = false;  // sudah tidak terpenuhi
    //     }
    //     i++;
    // } while (berjalan);
    // // karena tidak terpenuhi dia akan kesini
    // printf("\nSelesai");

    // for (int i = 0; i <= 100; i++) {
    //     if (i % 2 == 0) {
    //         printf("Angka %d => genap\n", i);
    //     } else {
    //         printf("Angka %d => ganjil\n", i);
    //     }
    // }
    int i = 0;
    while (i <= 100) {
        if (i % 2 == 0) {
            printf("Angka %d => genap\n", i);
        } else {
            printf("Angka %d => ganjil\n", i);
        }
        i++;
    }

    return 0;
}