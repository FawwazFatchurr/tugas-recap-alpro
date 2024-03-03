#include <stdio.h>

int main() {
    int jumlah;
    int nominal;
    int total = 0;
    
    // jumlah transaksi
    printf("Masukkan jumlah transaksi: ");
    scanf("%d", &jumlah);
    
    
    if (jumlah <= 0) {
        printf("Tidak ada transaksi hari ini\n");
        return 0;
    }
    
    // menghitung total pengeluaran
    for (int i = 0; i < jumlah; i++) {
        printf("Nominal transaksi ke-%d: ", i + 1);
        scanf("%d", &nominal);
        total += nominal;
    }
    
    // total pengeluaran
    printf("Total hari ini: %d\n", total);
    
    return 0;
}

