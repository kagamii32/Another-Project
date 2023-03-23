/*
Rumus Bunga
Bunga = Saldo Terendah * (Suku bunga * Jumlah hari dalam sebulan) / 365 hari

Asumsikan jika suku bunga bernilai tetap

*/

#include <stdio.h>

int main( ) {
    int tabungan_awal, bunga;

    printf("masukkan nilai tabungan awal dan suku bunga secara berturut-turut\n");
    scanf("%d %d", &tabungan_awal, &bunga);
    
    int mesin = (tabungan_awal * 9.86 * bunga);

    printf("jadi bunga yang didapatkan selama 10 tahun adalah sebanyak %d", mesin);



    return 0;
}