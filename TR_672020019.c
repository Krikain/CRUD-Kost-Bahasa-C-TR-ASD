#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>

FILE *fp,*fp1;
char ch[100];
float harga;

struct Kos{
    char nama[100];
    char alamat[100];
    char jenis[100];
    char fasilitas[100];
    int nomor;
    float harga;
}k,sort[100],temp;

void lowerCase(char *val){
	char *tampungVal = val;
	while(*tampungVal != '\0'){
		if(*tampungVal >= 65 && *tampungVal <= 90) *tampungVal += 32;
		*tampungVal++;
	}
}

void cariData(){
    char nama[100],alamat[100],jenis[100],fasilitas[100];
    int pilih,cek=0;
    float harga;
    system("cls");
    fp=fopen("data.txt","r");

    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n\t\t\t\t\t\t\tCari Data\n");
    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n");
    printf("\n\n\t\t\t\t\t\tCari Data Berdasarkan: ");
    printf("\n\n\n");
    printf("\t\t    [1]. Nama Kost\t\t   [2]. Alamat Kost\t\t\t [3]. Jenis Kost");
    printf("\n\n\n");
    printf("\t\t    [4]. Harga Kost\t\t  [5]. Fasilitas Kost\t\t\t [6].Kembali ke Menu");
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\tPilihan\t: ");
    scanf(" %d",&pilih);
    switch(pilih){
        case 1 :
            system("cls");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\t\t\t\t\t\t\tCari Data\n");
            for(int i=0;i<120;i++){
                printf("=");
            }printf("\n");

            printf("Masukan Nama Kost : ");
            scanf(" %[^\n]",&nama);

            printf("\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");

            while(fscanf (fp,"%d;%[^;];%[^;];%[^;];%[^;];%f\n",&k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,&k.harga)!=EOF)
            {
                if(strstr(k.nama,nama)!=NULL){
                   cek = 1;
                   printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",k.nomor,k.nama,k.alamat,k.jenis,k.harga,k.fasilitas);
                   }
            }
            break;

        case 2 :
            system("cls");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\t\t\t\t\t\t\tCari Data\n");
            for(int i=0;i<120;i++){
                printf("=");
            }printf("\n");

            printf("Masukan Alamat Kost : ");
            scanf(" %[^\n]",&alamat);

            printf("\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");

            while(fscanf (fp,"%d;%[^;];%[^;];%[^;];%[^;];%f\n",&k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,&k.harga)!=EOF)
            {
                if(strstr(k.alamat,alamat)!=NULL){
                   cek = 1;
                   printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",k.nomor,k.nama,k.alamat,k.jenis,k.harga,k.fasilitas);
                   }
            }
            break;

        case 3 :
            system("cls");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\t\t\t\t\t\t\tCari Data\n");
            for(int i=0;i<120;i++){
                printf("=");
            }printf("\n");

            printf("Masukan Jenis Kost : ");
            scanf(" %[^\n]",&jenis);

            printf("\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");

            while(fscanf (fp,"%d;%[^;];%[^;];%[^;];%[^;];%f\n",&k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,&k.harga)!=EOF)
            {
                if(strstr(k.jenis,jenis)!=NULL){
                   cek = 1;
                   printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",k.nomor,k.nama,k.alamat,k.jenis,k.harga,k.fasilitas);
                   }
            }
            break;

        case 4 :
            system("cls");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\t\t\t\t\t\t\tCari Data\n");
            for(int i=0;i<120;i++){
                printf("=");
            }printf("\n");

            printf("Masukan Harga Kost : ");
            scanf(" %f",&harga);

            printf("\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");

            while(fscanf (fp,"%d;%[^;];%[^;];%[^;];%[^;];%f\n",&k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,&k.harga)!=EOF)
            {
                if(harga == k.harga){
                   cek = 1;
                   printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",k.nomor,k.nama,k.alamat,k.jenis,k.harga,k.fasilitas);
                   }
            }
            break;
        case 5 :
            system("cls");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\t\t\t\t\t\t\tCari Data\n");
            for(int i=0;i<120;i++){
                printf("=");
            }printf("\n");

            printf("Masukan Fasilitas Kost : ");
            scanf(" %[^\n]",&fasilitas);

            printf("\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");

            while(fscanf (fp,"%d;%[^;];%[^;];%[^;];%[^;];%f\n",&k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,&k.harga)!=EOF)
            {
                if(strstr(k.fasilitas,fasilitas)!=NULL){
                   cek = 1;
                   printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",k.nomor,k.nama,k.alamat,k.jenis,k.harga,k.fasilitas);
                   }
            }
            break;
        case 6 : fclose(fp);Menu();break;
        default :
            printf("Input Anda Salah !!");
            break;
    }
    fclose(fp);
    if(cek!=1){
            printf("\n");
        printf("\n\t\t\t\t\t\tData tidak ditemukan !\a\a\a");
    }
    printf("\n\n\t\t\t\t\t\tPress any key to continue . . .");
    getch();

}

void urutkanData(){
    int pilih,z=0;
    system("cls");

    fp=fopen("data.txt","r");

    while(fscanf (fp,"%d;%[^;];%[^;];%[^;];%[^;];%f\n",&k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,&k.harga)!=EOF)
    {
    sort[z].nomor = k.nomor;
    strcpy(sort[z].nama, k.nama);
    strcpy(sort[z].alamat, k.alamat);
    strcpy(sort[z].jenis, k.jenis);
    strcpy(sort[z].fasilitas, k.fasilitas);
    sort[z].harga = k.harga;
    z++;
    }

    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n\t\t\t\t\t\t\tUrutkan Data\n");
    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n");
    printf("\n\n\t\t\t\t\t\tUrutkan Data Berdasarkan: ");
    printf("\n\n\n");
    printf("\t\t    [1]. Nama Kost\t\t   [2]. Alamat Kost\t\t\t [3]. Jenis Kost");
    printf("\n\n\n");
    printf("\t\t    [4]. Harga Kost\t\t  [5]. Fasilitas Kost\t\t\t [6].Kembali ke Menu");
    printf("\n\n\n");
    printf("\t\t\t\t\t\t\tPilihan\t: ");
    scanf(" %d",&pilih);

    switch(pilih){
        case 1 :
            system("cls");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\t\t\t\t\t\t\tUrutkan Data\n");
            for(int i=0;i<120;i++){
                printf("=");
            }printf("\n\n");

            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");

            for(int i=0;i<z-1;i++){
                for(int j=0;j<(z-1);j++){
                    if(strcmp(sort[j].nama,sort[j+1].nama)>0){
                        temp = sort[j];
                        sort[j] = sort[j+1];
                        sort[j+1] = temp;
                    }
                }
            }

            for(int i=0;i<z;i++){
                printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",sort[i].nomor,sort[i].nama,sort[i].alamat,sort[i].jenis,sort[i].harga,sort[i].fasilitas);
            }

            break;

        case 2 :
            system("cls");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\t\t\t\t\t\t\tUrutkan Data\n");
            for(int i=0;i<120;i++){
                printf("=");
            }printf("\n\n");

            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");

            for(int i=0;i<z-1;i++){
                for(int j=0;j<(z-1);j++){
                    if(strcmp(sort[j].alamat,sort[j+1].alamat)>0){
                        temp = sort[j];
                        sort[j] = sort[j+1];
                        sort[j+1] = temp;
                    }
                }
            }

            for(int i=0;i<z;i++){
                printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",sort[i].nomor,sort[i].nama,sort[i].alamat,sort[i].jenis,sort[i].harga,sort[i].fasilitas);
            }
            break;

        case 3 :
            system("cls");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\t\t\t\t\t\t\tUrutkan Data\n");
            for(int i=0;i<120;i++){
                printf("=");
            }printf("\n\n");

            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");

            for(int i=0;i<z-1;i++){
                for(int j=0;j<(z-1);j++){
                    if(strcmp(sort[j].jenis,sort[j+1].jenis)>0){
                        temp = sort[j];
                        sort[j] = sort[j+1];
                        sort[j+1] = temp;
                    }
                }
            }

            for(int i=0;i<z;i++){
                printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",sort[i].nomor,sort[i].nama,sort[i].alamat,sort[i].jenis,sort[i].harga,sort[i].fasilitas);
            }
            break;

        case 4 :
            system("cls");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\t\t\t\t\t\t\tUrutkan Data\n");
            for(int i=0;i<120;i++){
                printf("=");
            }printf("\n\n");

            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");

            for(int i=0;i<z-1;i++){
                for(int j=0;j<(z-1);j++){
                    if(sort[j].harga>sort[j+1].harga){
                        temp = sort[j];
                        sort[j] = sort[j+1];
                        sort[j+1] = temp;
                    }
                }
            }

            for(int i=0;i<z;i++){
                printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",sort[i].nomor,sort[i].nama,sort[i].alamat,sort[i].jenis,sort[i].harga,sort[i].fasilitas);
            }
            break;
        case 5 :
            system("cls");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\t\t\t\t\t\t\tUrutkan Data\n");
            for(int i=0;i<120;i++){
                printf("=");
            }printf("\n\n");

            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");

            for(int i=0;i<z-1;i++){
                for(int j=0;j<(z-1);j++){
                    if(strcmp(sort[j].fasilitas,sort[j+1].fasilitas)>0){
                        temp = sort[j];
                        sort[j] = sort[j+1];
                        sort[j+1] = temp;
                    }
                }
            }

            for(int i=0;i<z;i++){
                printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",sort[i].nomor,sort[i].nama,sort[i].alamat,sort[i].jenis,sort[i].harga,sort[i].fasilitas);
            }
            break;
        case 6 : fclose(fp);Menu();break;
        default : break;

    }
    fclose(fp);
    printf("\n\n\t\t\t\t\t\tPress any key to continue . . .");

    getch();
}

void deleteData(){
    int cek = 0, choose;
    system("cls");
    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n\t\t\t\t\t\t\tHapus Data\n");
    for(int i=0;i<120;i++){
        printf("=");
    }
    show();
    fp = fopen("data.txt","r");
    fp1 = fopen("baru.txt","w");
    printf("\n\n\t\t\t\t\tInput ID Kost yang ingin di hapus : ");
    scanf("%d",&choose);
    while(fscanf(fp,"%d;%[^;];%[^;];%[^;];%[^;];%f\n",&k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,&k.harga)!=EOF)
    {
        if(k.nomor != choose){
            fprintf(fp1,"%d;%s;%s;%s;%s;%f\n",k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,k.harga);
        }
        else{
            cek = 1;
            printf("\n\t\t\t\t\t\tData Kost dengan Nama : %s\n",k.nama);
			printf("\t\t\t\t\t\tBerhasil dihapus dari Daftar !");
        }
    }
    fclose(fp);
    fclose(fp1);
    remove("data.txt");
    rename("baru.txt","data.txt");

    if(cek==0){
        printf("\n Data tidak ditemukan !");
	}

	getch();
}

void ubahData(){
	int choose, pilih,cek=0;
	system("cls");
	for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n\t\t\t\t\t\t\tUbah Data\n");
    for(int i=0;i<120;i++){
        printf("=");
    }

    show();

    fp = fopen("data.txt","r");
	fp1 = fopen ("baru.txt","w");

	printf ("\n\n\t\t\t\t\t\tMasukan Nomor Kost : ");
	scanf (" %d",&choose);
	while(fscanf (fp,"%d;%[^;];%[^;];%[^;];%[^;];%f\n",&k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,&k.harga)!=EOF)
	{
		if(k.nomor == choose){
            cek=1;
			ganti:
            system("cls");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\t\t\t\t\t\t\tUbah Data\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");
            printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",k.nomor,k.nama,k.alamat,k.jenis,k.harga,k.fasilitas);
            for(int i=0;i<120;i++){
                printf("=");
            }
            printf("\n");
            printf("\n\n\t\t\t\t\t\tData yang akan diganti : ");
            printf("\n\n\n");
            printf("\t\t    [1]. Nama Kost\t\t   [2]. Alamat Kost\t\t\t [3]. Jenis Kost");
            printf("\n\n\n");
            printf("\t\t    [4]. Harga Kost\t\t  [5]. Fasilitas Kost\t\t\t [6].Kembali ke Menu");
            printf("\n\n\n");
            printf("\t\t\t\t\t\t\tPilihan\t: ");
            scanf("%d",&pilih);

            switch(pilih){

            case 1 :
                printf ("\n\t\t\t\t\t\tMasukan Data Nama Kost Baru : ");fflush(stdin);
                scanf ("%[^\n]",&ch);
                strcpy(k.nama,ch);
                fprintf(fp1,"%d;%s;%s;%s;%s;%f\n",k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,k.harga);
                printf ("\n\t\t\t\t\t\tPerubahan Sudah Disimpan !");
				break;

            case 2 :
                printf("\n\t\t\t\t\t\tMasukan Data Alamat Kost Baru : ");fflush(stdin);
                scanf ("%[^\n]",&ch);
                strcpy(k.alamat,ch);
                fprintf(fp1,"%d;%s;%s;%s;%s;%f\n",k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,k.harga);
                printf ("\n\t\t\t\t\t\tPerubahan Sudah Disimpan !");
                break;

            case 3 :
                printf("\n\t\t\t\t\t\tMasukan Data Jenis Kost Baru : ");fflush(stdin);
                scanf ("%[^\n]",&ch);
                strcpy(k.jenis,ch);
                fprintf(fp1,"%d;%s;%s;%s;%s;%f\n",k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,k.harga);
                printf ("\n\t\t\t\t\t\tPerubahan Sudah Disimpan !");
                break;

            case 4 :
                printf("\n\t\t\t\t\t\tMasukan Data Harga Kost Baru : ");fflush(stdin);
                scanf ("%f",&harga);
                k.harga = harga;
                fprintf(fp1,"%d;%s;%s;%s;%s;%f\n",k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,k.harga);
                printf ("\n\t\t\t\t\t\tPerubahan Sudah Disimpan !");
                getch();
                break;

            case 5 :
                printf("\n\t\t\t\t\t\tMasukan Data Fasilitas Kost Baru : ");fflush(stdin);
                scanf ("%[^\n]",ch);
                strcpy(k.fasilitas,ch);
                fprintf(fp1,"%d;%s;%s;%s;%s;%f\n",k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,k.harga);
                printf ("\n\t\t\t\t\t\tPerubahan Sudah Disimpan !");
                break;

            case 6 :fclose(fp);fclose(fp1);remove("baru.txt");Menu();
                break;
            default :
                printf("\n\n\t\t\t\t\t\tInput Anda Salah !");
                getch();
                goto ganti;
                break;}getch();
		}else{
            fprintf(fp1,"%d;%s;%s;%s;%s;%f\n",k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,k.harga);
		}
	}
    fclose(fp);
	fclose(fp1);
	remove("data.txt");
    rename("baru.txt","data.txt");

	if(cek!=1){
        printf("\n\t\t\t\t\t\tData tidak ditemukan !\a\a\a");
    }
    printf("\n\n\t\t\t\t\t\tPress any key to continue . . .");
    getch();
}

void show(){
    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n");

    fp=fopen("data.txt","r");
    int cek=0;

    while(fscanf (fp,"%d;%[^;];%[^;];%[^;];%[^;];%f\n",&k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,&k.harga)!=EOF)
    {
        printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",k.nomor,k.nama,k.alamat,k.jenis,k.harga,k.fasilitas);
        cek++;
    }
    for(int i=0;i<120;i++){
        printf("=");
    }
    fclose(fp);
}

void inputData(){
    char cek[100];
    system("cls");
    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n\t\t\t\t\t\t\tInput Data\n");
    for(int i=0;i<120;i++){
        printf("=");
    }

        fp =fopen("data.txt","a");
        fp1 =fopen("data.txt","r");
        while (fscanf (fp1,"%d;%[^;];%[^;];%[^;];%[^;];%f\n",&k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,&k.harga)!=EOF)
		{
			k.nomor++;
		}
		k.nomor = k.nomor;
		fclose(fp1);
		printf("\nMasukan Nama Kost : ");fflush(stdin);
		scanf("%[^\n]",k.nama);
		printf("Masukan Alamat Kost: ");fflush(stdin);
		scanf("%[^\n]",k.alamat);
		do {
        printf("Masukan Jenis Kost (Putra/Putri/Campur) : ");fflush(stdin);
		scanf("%[^\n]",k.jenis);
		strcpy(cek,k.jenis);
		lowerCase(&cek);
		if(strstr("putra/putri/campur",cek)==NULL){
            printf("Data yang anda masukkan salah\n");
            getch();
		}
		}while (strstr("putra/putri/campur",cek)==NULL);
		printf("Masukan Fasilitas Kost : ");fflush(stdin);
		scanf("%[^\n]",k.fasilitas);
		printf("Masukan Harga Kost : ");
		scanf("%f",&k.harga);
		fprintf(fp,"%d;%s;%s;%s;%s;%f\n",k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,k.harga);
		fclose(fp);

		printf("\nData Mahasiswa Sudah Disimpan !");
		printf("\n\n\t\t\t\t\t\tPress any key to continue . . .");
		getch();

}

void lihatData(){
    system("cls");
    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n\t\t\t\t\t\t\tLihat Data\n");
    for(int i=0;i<120;i++){
        printf("=");
    }

    printf("\n\n");

    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n\tNomor\tNama\tAlamat\t\tJenis\tHarga\t\tFasilitas\n");
    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n");

    fp=fopen("data.txt","r");
    int cek=0;

    while(fscanf (fp,"%d;%[^;];%[^;];%[^;];%[^;];%f\n",&k.nomor,k.nama,k.alamat,k.jenis,k.fasilitas,&k.harga)!=EOF)
    {
        printf("\t%d\t%s\t%s\t%s\t%.0f\t\t%s\n",k.nomor,k.nama,k.alamat,k.jenis,k.harga,k.fasilitas);
        cek++;
    }
    fclose(fp);
    if(cek == 0){
        printf("Data Kosong !\n");
    }
    printf("\n\n\t\t\t\t\t\tPress any key to continue . . .");
    getch();
}

void buatFile(){
    TR();
    FILE *fp;
    system("cls");

    fp = fopen("data.txt", "w");
    fclose(fp);
    printf("\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tFile Telah Dibuat\n");
    printf("\n\n\t\t\t\t\t\tPress any key to continue . . .");
    getch();
}

void Menu(){
    int pilihan;
    Load();
    do{
        system("cls");
        TR();
        printf("\n\n\n");
        printf("\t\t    1.Buat File\t\t\t\t2.Lihat Data\t\t\t   3.Input Data");
        printf("\n\n\n");
        printf("\t\t    4.Ubah Data\t\t\t\t5.Delete Data\t\t\t   6.Urutkan Data");
        printf("\n\n\n");
        printf("\t\t\t\t   7.Cari Data\t\t\t\t   8.Keluar");
        printf("\n\n\n");
        printf("\t\t\t\t\t\t\tPilihan\t: ");
        scanf("%d",&pilihan);

        switch(pilihan){
        case 1 :buatFile();break;
        case 2 :lihatData();break;
        case 3 :inputData();break;
        case 4 :ubahData();break;
        case 5 :deleteData();break;
        case 6 :urutkanData();break;
        case 7 :cariData();break;
        case 8 :exit(0);break;
        }
    }while(pilihan!=8);
}

void Login(){
    char username[20],password[20];
    int x;
    do{
    TR();
    printf("\n\n\n");
    printf("\t\t\t\t\t\t------------Login------------\n\n\n");
    printf("\t\t\t\t\t\t  Username\t: ");
    scanf("%s",&username);
    printf("\t\t\t\t\t\t  Password\t: ");
    scanf("%s",&password);

    if(strcmp(username,"admin")==0 && strcmp(password,"admin")==0){
    printf("\n\n\t\t\t\t\t\tSelamat datang %s !!!",username);
    printf("\n\n\t\t\t\t\t\tPress any key to continue . . .");
    x=1;
    getch();

    }else{
    printf("\n\n\t\t\t\t\t\tUsername/Password Salah !!!");
    printf("\n\n\t\t\t\t\t\tPress any key to continue . . .");
    x=0;
    getch();
    }
    }while(x==0);
}

void TR(){
    system("cls");
    for(int i=0;i<120;i++){
        printf("=");
    }
    printf("\n\n\t\t\t\t\t\t\tTugas Rancang\n\n");
    for(int i=0;i<120;i++){
        printf("=");
    }
}

void Start(){
    system("cls");
    char a = 177, b = 219;
    printf("\n\n\n\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t\t\tStarting...\n\n");
    printf("\t\t\t\t\t\t");

    for (int i = 0; i < 26; i++)
        printf("%c", a);

    printf("\r");
    printf("\t\t\t\t\t\t");

    for (int i = 0; i < 26; i++) {
        printf("%c", b);
        Sleep(100);
    }
}

void Load(){
    system("cls");
    char a = 177, b = 219;
    printf("\n\n\n\n\n\n\n");
    printf("\n\n\n\n\t\t\t\t\t\t\tLoading...\n\n");
    printf("\t\t\t\t\t\t");

    for (int i = 0; i < 26; i++)
        printf("%c", a);

    printf("\r");
    printf("\t\t\t\t\t\t");

    for (int i = 0; i < 26; i++) {
        printf("%c", b);
        Sleep(100);
    }
}

void main(){
    system("color 9F");
    Start();
    Login();
    Menu();
}

