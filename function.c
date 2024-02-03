// #include <stdio.h>

// void printMyname(char nama[], char tempatLahir[]) {
//     printf("Nama Saya %s \n", nama);

//     printf("Lahir Di %s \n", tempatLahir);
// }

// int angkaku(int nilai) {
//     int hasil = 5 * nilai;
//     printf("Angakku adalah %d\n", hasil);
//     return hasil;
// }

// int luasPersegi(int panjang, int lebar) {
//     return panjang * lebar;
// }

// int main() {

//     // printMyname("Angga", "Tasikmalaya");

//     // int luasPersesiAku = luasPersegi(10, 5);
//     // printf("Jadi Luas persegi adalah %d\n", luasPersesiAku);
//     // printf("Jadi Luas2 persegi adalah %d\n", luasPersegi(20, 5));
//     int sum = 0;
//     for (size_t i = 0; i < 10; i++) {
//         /* code */
//         // printf("Angakku adalah %d\n", angkaku(i));
//         sum += angkaku(i);
//     }
//     printf("Penjumlahan Adalah %d\n", sum);
//     // int hasilFunc = ;
//     // int hasilFunc1 = angkaku(5);
//     // int hasilFunc2 = angkaku(9);

//     // printf("Angakku adalah %d\n", hasilFunc);
//     // printf("Angakku adalah %d\n", hasilFunc1);
//     // printf("Angakku adalah %d\n", hasilFunc2);

//     return 0;
// }

#include <stdio.h>

// Deklarasi fungsi faktorial rekursif
int factorial(int n);

int main() {
    int number;
    
    // Input bilangan untuk menghitung faktorial
    printf("Masukkan bilangan untuk menghitung faktorial: ");
    scanf("%d", &number);
    
    // Memanggil fungsi faktorial dan menampilkan hasil
    printf("Faktorial dari %d adalah %d\n", number, factorial(number));

    return 0;
}

// Implementasi fungsi faktorial rekursif
int factorial(int n) {
    // Kasus dasar: 0! dan 1! sama dengan 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Kasus rekursif: n! = n * (n-1)!
        return n * factorial(n - 1);
    }
}