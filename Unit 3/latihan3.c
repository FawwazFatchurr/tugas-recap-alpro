#include <stdio.h>

int main() {
    int elemen, i, total = 0;

    // Membaca jumlah elemen
    printf("masukan banyak elemen:");
    scanf("%d", &elemen);

    // Deklarasi array
    int array [elemen];

    // Memasukan nilai ke dalam array dan menjumlahkan
    for (i = 0; i < elemen; i++) {
        printf("masukan nilai");
        scanf("%d", &array[i]);
        total += array[i];
    }

    // Menampilkan hasil penjumlahan
    printf("hasilnya:");
    printf("%d\n", total);

    return 0;
}
