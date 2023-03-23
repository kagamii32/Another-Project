
#include <stdio.h>

int main() {
    int i, j, x;
    x = 5000000; // x adalah tabungan awal
    const float y = 0.05; // y adalah suku bunga dalam persen (suku bunga y bernilai tetap)
    const float z = 365; // z menggambarkan seberapa lama tabungan ini disimpan (waktu)

        printf("nilai tabungan awal adalah %d dan nilai suku bunga adalah %d\n", x, y);
        int a = (x * y * z)/365; // a adalah bunga dari tabungan
        printf("Jumlah tabungan = %d\n", a);

    for (i = 1, j = 1; i <= 10, j <= 10; i++, j++) {
    printf("Jumlah tabungan pada tahun ke %d adalah %i\n",j , i * x + a);
    }
    
    printf("jadi jumlah bunga yang didapatkan dalam tabungan ialah sebesar %d", a * 10);


    return 0;
}