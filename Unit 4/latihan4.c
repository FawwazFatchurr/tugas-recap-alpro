#include <stdio.h>

// Function untuk keliling persegi
float kelpers(float sisi) {
    return 4 * sisi;
}

// Function untuk luas persegi
float lupers(float sisi) {
    return sisi * sisi;
}

// Function untuk volume kubus
float volkub(float sisi) {
    return sisi * sisi * sisi;
}

int main() {
    float sisi;
    
    // Membaca panjang dari input
    printf("Masukan panjang sisi:");
    scanf("%f", &sisi);

    // Menghitung keliling persegi
    float keliling = kelpers(sisi);

    // Menghitung luas persegi
    float luas = lupers(sisi);

    // Menghitung volume kubus
    float volume = volkub(sisi);

    // Hasil perhitungan
    printf("Kelilingnya :");
    printf("%.2f\n", keliling);
    printf("Luasnya :");
    printf("%.2f\n", luas);
    printf("Volumenya:");
    printf("%.2f\n", volume);

    return 0;
}
