#include <stdio.h>

int main() {
    int jarak, kecepatan, waktu;

    
    scanf("%d %d", &jarak, &waktu); // untuk memasukan jarak dan waktu
    
    float v = (float)jarak / waktu; // penghitung kecepatan
    
    printf("%.2f\n", v); // penampil kecepatan

    
    scanf("%d %d", &kecepatan, &waktu); // Input kecepatan dan waktu
    
    float s = (float)kecepatan * waktu; // penghitung jarak
    
    printf("%.2f\n", s); // penampil jarak

    
    scanf("%d %d", &jarak, &kecepatan); // untuk memasukan jarak dan kecepatan
    
    float t = (float)jarak / kecepatan; // penghitung waktu
    
    printf("%.2f\n", t); // penampil waktu

    return 0;
}
