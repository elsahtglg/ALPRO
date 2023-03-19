/* Nama File    		: JumFrekNilTabel */
/* Deskripsi    		: Menampilkan jumlah nilai-nilai elemen tabel T yang frekuensi kemunculannya lebih dari satu kali. */
/* Pembuat      		: Elsa Hutagalung - 24060122120024 */
/*Tanggal Pembuatan		: 14 Maret 2023 */

#include <stdio.h>
#include <stdlib.h>

int JumFrek()
{
    int N;
    printf("Masukkan Sebuah Integer: ");
    scanf("%d", &N);

    int T[N], count[N];
    for(int i=0; i<N; i++){
        scanf("%d", &T[i]);
        count[i]=1;
    }
    for(int i=0; i<N-1; i++){
        for(int j=i+1; j<N; j++){
            if(T[i]==T[j]){
                count[i]++;
                count[j]++;
            }
        }
    }
    int sum = 0;
    for(int i=0; i<N; i++){
        if(count[i]>1){
            sum += T[i];
        }
    }
    printf("Jumlah elemen yang frekuensinya lebih dari satu adalah: %d\n", sum);

    return 0;
}

