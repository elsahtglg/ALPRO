/* Nama File    		: SubProgram */
/* Deskripsi    		: SubProgram bentuk Fungsi dan Prosedur dari soal JumPrima. */
/* Pembuat      		: Elsa Hutagalung - 24060122120024 */
/*Tanggal Pembuatan		: 25 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int hasil;
    int hasilprosedur;
    hasil = JumPrima(10);
    printf("%d", hasil);
    ProsJumPrima(10, &hasilprosedur);
    printf("%d, hasilprosedur");
}
int JumPrima(int N){
    int i, j;
    int Jum;
    int TotalPrima=0;

    if(N>0){
        printf("Bilangan Prima: ");
        for(i=1;i<=N;i++){
            Jum = 0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                    Jum++;
                }
            }
        }
        if(Jum==2){
            printf("%d + ", i);
            TotalPrima+=i;
        }
    }
    printf("\n");
    return TotalPrima;
}

void ProsJumPrima(int N, int* TotalPrima){
    int i, j;
    int Jum;
    (*TotalPrima)=0;

    if(N>0){
        printf("Bilangan Prima: ");
        for(i=1;i<=N;i++){
            Jum = 0;
            for(j=1;j<=i;j++){
                if(i%j==0){
                    Jum++;
                }
            }
            if(Jum==2){
            printf("%d + ", i);
            (*TotalPrima)+=i;
            }

        }
    }
    printf("\n");
}
