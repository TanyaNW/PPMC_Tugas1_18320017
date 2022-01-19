 #include <stdio.h>

 int
 main(void)
 {
    int wadah_A,
        wadah_B,
        perintah;

    wadah_A = 0;
    wadah_B = 0;
    perintah = 0;

    printf("Game Water Jug\n");
    printf("Dapatkan air sebanyak 4 L dari wadah A (3 L) dan wadah B (5 L)\n");
    printf("Selamat bermain!!\n");
    printf(" \n");

    while( wadah_B != 4)
    {
        printf("Dapatkan air sebanyak 4 L\n");
        printf("Wadah A : %d L\n", wadah_A);
        printf("Wadah B : %d L\n", wadah_B);
        printf(" \n");
        printf("Aksi : \n");
        printf("1. Isi wadah A\n");
        printf("2. Isi wadah B\n");
        printf("3. Pindahkan air dari wadah A ke wadah B\n");
        printf("4. Pindahkan air dari wadah B ke wadah A\n");
        printf("5. Kosongkan wadah A\n");
        printf("6. Kosongkan wadah B\n");
        printf("Masukkan aksi yang dipilih : \n");
        scanf("%d", &perintah);
        printf(" \n");

        if(perintah == 1)
        {
            wadah_A = 3;
        }

        else if(perintah == 2)
        {
            wadah_B = 5;
        }

        else if(perintah == 3)
        {
            if((wadah_A + wadah_B) <= 5)
            {
                wadah_B = wadah_B + wadah_A,
                wadah_A = 0;
            }
            else
            {
                wadah_A = (wadah_B + wadah_A) - 5,
                wadah_B = 5;

            }

        }

        else if(perintah == 4)
        {
            if((wadah_A + wadah_B) <= 3)
            {
                wadah_A = wadah_B + wadah_A,
                wadah_B = 0;
            }
            else
            {
                wadah_B = (wadah_B + wadah_A) - 3,
                wadah_A = 3;
            }
        }

        else if(perintah == 5)
        {
            wadah_A = 0;
        }

        else if(perintah == 6)
        {
            wadah_B = 0;
        }

    }
    printf("Air sebanyak 4 L didapatkan\n");
    printf("Wadah A : %d L\n", wadah_A);
    printf("Wadah B : %d L\n", wadah_B);
    printf(" \n");
    printf("Selamat!! Game Water Jug selesai!!\n");

    return(0);
 }
