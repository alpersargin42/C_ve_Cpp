#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 2

/* kitap structımızı tanımlıyoruz */
typedef struct kitap{
	char kitapAdi[50];
	char yazar[50];
	int kitap_id;
}kitap;

/* kutuphane structımızı tanımlıyoruz */
typedef struct kutuphane{
	kitap *kitaplar;
	int sayi;
}kutuphane;

void kitap_bilgisi_ekle(kitap * kitap);
void kutuphane_yazdir(kutuphane *library);
void kitap_bilgisi_ekle(kitap * kitap);

int main()
{
	int i=0;
	kutuphane *kutuphanem;
	  /*değişkenimizin üzerine yer alıyoruz */
	kutuphanem=(kutuphane *)malloc(sizeof(kutuphane)*size);
	kutuphanem->sayi=size;
	/*değişkenimizin üzerine SIZE*kitap kadar yer alıyoruz */
	kutuphanem->kitaplar=(kitap *)malloc(sizeof(kitap)*size);
	/* kitap bilgilerimizi ekliyoruz */
	for(i=0;i<size;i++)
	{
		kitap_bilgisi_ekle(&(kutuphanem->kitaplar[i]));
	}
	/* kütüphanemizdeki kitapları ekrana yazdırıyoruz */
	kutuphane_yazdir(kutuphanem);
	
	return 0;
}

void kitap_yazdir(kitap * ktp){

	printf("\nKitap Bilgileri:\n");
	printf("kitap adı: %s\n", ktp->kitapAdi);
	printf("kitap yazarı: %s\n", ktp->yazar);
	printf("kitap kitap_id: %d\n", ktp->kitap_id);
}

void kutuphane_yazdir(kutuphane *library)
{
	int i=0;
	printf("kütühanemizdeki kitaplar");
	/* tüm kütüphane boyunca gezen döngü*/
	for(i=0;i<library->sayi;i++)
	{
		kitap_yazdir(&library->kitaplar[i]);
	}
}



void kitap_bilgisi_ekle(kitap * ktp){

    printf("\nlütfen kitap bilgilerini giriniz:\n");
	scanf("%s", &ktp->kitapAdi);
	scanf("%s", &ktp->yazar);
	scanf("%d", &ktp->kitap_id);
}