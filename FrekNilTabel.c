/* Nama File    		: FrekNilTabel */
/* Deskripsi    		: Menampilkan nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali.  */
/* Pembuat      		: Elsa Hutagalung - 24060122120024 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>


int FrekNilTabel()
{
    int N;
    printf("Masukkan Sebuah Integer: ");
    scanf("%d", &N);

    int T[N];
    for (int i=0; i<N; i++){
        scanf("%d", &T[i]);
    }

    printf("Element dengan frekuensi lebih dari satu: ");
    for(int i=0; i<N; i++){
        int count=0;
        for(int j=i+1; j<N; j++){
            if(T[i]==T[j]){
                count=0;
            }
        }
        for(int k=i-1; k>=0; k--){
            if(T[i]==T[k]){
                count++;
                break;
            }
        }
        if(count>0){

            printf("%d\n", T[i]);
        }
    }
    return 0;
}
