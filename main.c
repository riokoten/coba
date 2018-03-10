#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil, data[100], i, j,k, temp, banyak=0;
    printf ("Jumlah angka : ");
    scanf ("%d", &bil);

    for (i=0; i<bil; i++)
    {
        printf ("Insert Bil ke-%d : ", i+1);
        scanf ("%d", &data[i]);
    }

    printf ("Data Sebelum Bubble Sort : ");
    for (i=0;i<bil;i++)
    {
        printf ("%d ", data[i]);
    }

    for (j=0;j<bil-1;j++)
    {
        printf ("Iterasi ke-%d \n", j+1);
        for (i=0;i<bil-(j+1);i++)
        {

            if(data[i]>data[i+1])
            {
                temp=data[i];
                data[i]=data[i+1];
                data[i+1]=temp;
            }
            for (k=0;k<bil;k++)
            {
                printf ("%d ", data[k]);
            }
            banyak++;
            printf ("\n");
        }
    }

    printf ("\nHASIL SETELAH PROSES BUBBLE SORT\n");
    for (k=0;k<bil;k++)
        printf ("%d ", data[k]);
    printf ("\nBanyak proses perbandingan : %d", banyak);
    return 0;
}
