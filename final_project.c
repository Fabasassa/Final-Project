
#include<stdio.h>
#include<string.h>

struct data{
    char nama_mobil[20];
    char merek[50];
    double harga_standar;
    double harga_komplit;
    int durasi;
};

struct data penyewaan[10]={
};

struct data swap[10]={
};

int main(){
    int simpan[10];
    char nama[30], merek[30];
    float dat1, dat2;
    int a, i, j, pilih, durasi;
    strcpy(penyewaan[0].nama_mobil, "Alpine Concept 2");
    strcpy(penyewaan[0].merek, "Renault");
    penyewaan[0].harga_standar = 1400000;
    penyewaan[0].harga_komplit = 2400000;

    strcpy(penyewaan[1].nama_mobil, "Supra MK 5");
    strcpy(penyewaan[1].merek, "Toyota");
    penyewaan[1].harga_standar = 1500000;
    penyewaan[1].harga_komplit = 2300000;
    
    strcpy(penyewaan[2].nama_mobil, "G Class");
    strcpy(penyewaan[2].merek, "Mercedes Benz");
    penyewaan[2].harga_standar = 1000000;
    penyewaan[2].harga_komplit = 1400000;

    strcpy(penyewaan[3].nama_mobil, "GTR-34 ");
    strcpy(penyewaan[3].merek, "Nissan");
    penyewaan[3].harga_standar = 1700000;
    penyewaan[3].harga_komplit = 1850000;

    strcpy(penyewaan[4].nama_mobil, "Corvette");
    strcpy(penyewaan[4].merek, "Chevrolet");
    penyewaan[4].harga_standar = 1550000;
    penyewaan[4].harga_komplit = 1680000;

    strcpy(penyewaan[5].nama_mobil, "DB 9");
    strcpy(penyewaan[5].merek, "Aston Martin");
    penyewaan[5].harga_standar = 1300000;
    penyewaan[5].harga_komplit = 1475000;

    strcpy(penyewaan[6].nama_mobil, "Continental GT3");
    strcpy(penyewaan[6].merek, "Bentley");
    penyewaan[6].harga_standar = 1300000;
    penyewaan[6].harga_komplit = 1450000;

    strcpy(penyewaan[7].nama_mobil, "Essenza SCV 12");
    strcpy(penyewaan[7].merek, "Lamborghini");
    penyewaan[7].harga_standar = 1900000;
    penyewaan[7].harga_komplit = 3000000;

    strcpy(penyewaan[8].nama_mobil, "P1");
    strcpy(penyewaan[8].merek, "Mc Laren");
    penyewaan[8].harga_standar = 1980000;
    penyewaan[8].harga_komplit = 3100000;

    strcpy(penyewaan[9].nama_mobil, "Regera");
    strcpy(penyewaan[9].merek, "Koenigsegg");
    penyewaan[9].harga_standar = 2300000;
    penyewaan[9].harga_komplit = 3500000;

    for(a = 0; a < 10; a++){
        if((penyewaan[a].harga_standar > (0.6*penyewaan[a].harga_komplit))){
            penyewaan[a].durasi = 3;
        }
        else if((penyewaan[a].harga_standar > (0.4*penyewaan[a].harga_komplit))){
            penyewaan[a].durasi = 5;
        }
        else{
            penyewaan[a].durasi = 7;
        }
    }

    menu:
    system("cls");
    printf("\n=============== PROGRAM PENYEWAAN MOBIL ==================\n");
    printf(" 1. Data Mobil\n");
    printf(" 2. Urutkan Data Mobil\n");
    printf(" 3. Cari Data Mobil\n");
    printf(" Masukkan Pilihan : ");
    scanf("%d", &pilih);

    if(pilih == 1){
        system("cls");
        printf("Nama\t\t\tMerek\t\tHarga Standar\t\tHarga Komplit\n");
        for(i = 0; i < 10; i++){
            printf("%s\t\t%s\t\t\t\t%d\n", penyewaan[i].nama_mobil, penyewaan[i].merek, penyewaan[i].harga_standar, penyewaan[i].harga_komplit);
        }
        sleep(5);
        goto menu;
    }

    else if(pilih == 2){
        system("cls");
        printf("=============== Pilih Urutan Data ==========\n\n");
        printf(" 1. Ascending\n");
        printf(" 2. Descending\n");
        printf("==>Masukkan Pilihan : ");
        scanf("%d", &pilih);

        if(pilih == 1){
            for(i = 1; i < 10; i++){
                strcpy(swap[i].nama_mobil, penyewaan[i].nama_mobil);
                strcpy(swap[i].merek, penyewaan[i].merek);
                swap[i].harga_standar = penyewaan[i].harga_standar;
                swap[i].harga_komplit = penyewaan[i].harga_komplit;
                j = i - 1;
                while((penyewaan[j].durasi > swap[i].durasi) && j >= 0){
                    strcpy(penyewaan[j+1].nama_mobil, penyewaan[j].nama_mobil);
                    strcpy(penyewaan[j+1].merek, penyewaan[j].merek);
                    penyewaan[j+1].harga_standar = penyewaan[j].harga_standar;
                    penyewaan[j+1].harga_komplit = penyewaan[j].harga_komplit;
                    penyewaan[j+1].durasi = penyewaan[j].durasi;
                    j--;
                }
                strcpy(penyewaan[j+1].nama_mobil, penyewaan[i].nama_mobil);
                strcpy(penyewaan[j+1].merek, penyewaan[i].merek);
                penyewaan[j+1].harga_standar = penyewaan[i].harga_standar;
                penyewaan[j+1].harga_komplit = penyewaan[i].harga_komplit;
                penyewaan[j+1].durasi = penyewaan[i].durasi;
            }
            printf("Pengurutan selesai, cek kembali menu lihat data");
            sleep(2);
            goto menu;
        }

        else if(pilih == 2){
            for(i = 1; i < 10; i++){
                strcpy(swap[i].nama_mobil, penyewaan[i].nama_mobil);
                strcpy(swap[i].merek, penyewaan[i].nama_mobil);
                swap[i].harga_standar = penyewaan[i].harga_standar;
                swap[i].harga_komplit = penyewaan[i].harga_komplit;
                swap[i].durasi = penyewaan[i].durasi;
                j = i - 1;
                while((penyewaan[j].durasi < swap[i].durasi) && j >= 0){
                    strcpy(penyewaan[j+1].nama_mobil, penyewaan[j].nama_mobil);
                    strcpy(penyewaan[j+1].merek, penyewaan[j].merek);
                    penyewaan[j+1].harga_standar= penyewaan[j].harga_standar;
                    penyewaan[j+1].harga_komplit = penyewaan[j].harga_komplit;
                    penyewaan[j+1].durasi = penyewaan[j].durasi;
                    j--;
                }
                strcpy(penyewaan[j+1].nama_mobil, swap[i].nama_mobil);
                strcpy(penyewaan[j+1].merek, swap[i].merek);
                penyewaan[j+1].harga_standar = swap[i].harga_standar;
                penyewaan[j+1].harga_komplit = swap[i].harga_komplit;
                penyewaan[j+1].durasi = swap[i].durasi;
            }
            printf("Pengurutan selesai, cek kembali menu lihat data");
            sleep(2);
            goto menu;
        }

        else{
            printf("Input Salah");
            sleep(2);
            goto menu;
        }
    }

    else if(pilih == 3){
        int benar = 0;
        int k = 0;
        system("cls");
        printf("===== Pilih Pencarian Data =====\n\n");
        printf(" 1. Durasi\n");
        printf(" 2. Nama Mobil\n");
        printf(" 3. Merek\n");
        printf("==>Masukkan Pilihan : ");
        scanf("%d", &pilih);

        if(pilih == 1){
            printf("Masukkan Durasi Penyewaan Mobil : ");
            scanf("%d", &durasi);

            for(i = 0; i < 10; i++){
                if(penyewaan[i].durasi == durasi){
                    benar = 1;
                    simpan[k] = i;
                    k++;
                }
            }
            if(benar == 1){
                printf("\n\n");
                printf("Data Ditemukan !\n");
                printf("Nama Mobil\tMerek\t\tDurasi\n");
                for(i = 0; i < k; i++){
                    printf("%s\t\t%s\t\t%d\n", penyewaan[simpan[i]].nama_mobil, penyewaan[simpan[i]].merek, penyewaan[simpan[i]].durasi);
                }
                sleep(5);
                goto menu;
            }
            else{
                printf("Data Tidak Ditemukan");
                sleep(2);
                goto menu;
            }
        }

        else if(pilih == 2){
            fflush(stdin);
            printf("Nama Mobil : ");
            gets(nama);

            for(i = 0; i < 10; i++){
                if(strcmp(penyewaan[i].nama_mobil, nama) == 0){
                    benar = 1;
                    simpan[k] = i;
                    k++;
                }
            }
            if(benar == 1){
                printf("\n\n");
                printf("Data Ditemukan !\n");
                printf("Nama Mobil\tMerek\t\tDurasi\n");
                for(i = 0; i < k; i++){
                    printf("%s\t\t%s\t\t%d\n", penyewaan[simpan[i]].nama_mobil, penyewaan[simpan[i]].merek, penyewaan[simpan[i]].durasi);
                }
                sleep(5);
                goto menu;
            }
            else{
                printf("Data Tidak Ditemukan");
                sleep(2);
                goto menu;
            }

        }

        else if(pilih == 3){
            fflush(stdin);
            printf("Merek Mobil : ");
            gets(merek);

            for(i = 0; i < 10; i++){
                if(strcmp(penyewaan[i].merek, merek) == 0){
                    benar = 1;
                    simpan[k] = i;
                    k++;
                }
            }
            if(benar == 1){
                printf("\n\n");
                printf("Data Ditemukan !\n");
                printf("Nama Mobil\tMerek\t\tDurasi\n");
                for(i = 0; i < k; i++){
                    printf("%s\t\t%s\t\t%d\n", penyewaan[simpan[i]].nama_mobil, penyewaan[simpan[i]].merek, penyewaan[simpan[i]].durasi);
                }
                sleep(5);
                goto menu;
            }
            else{
                printf("Data Tidak Ditemukan");
                sleep(2);
                goto menu;
            }

        }

        else{
            printf("Input Salah");
            sleep(2);
            goto menu;
        }

    }

    else{
        printf("Input Salah");
        sleep(2);
        goto menu;
    }
}
