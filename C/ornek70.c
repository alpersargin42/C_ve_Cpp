#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct kitap{
	char kitapAdi[50];
	char yazar[50];
	int kitap_id;
}kitap;

void kitap_bilgisi_ekle(kitap * ktp)
{
	printf("Kitap bilgilerini giriniz: ");
	scanf("%s", &ktp->kitapAdi);
	scanf("%s", &ktp->yazar);
	scanf("%d", &ktp->kitap_id);
}

void kitap_yazdir(kitap * ktp)
{
	printf("Kitap Adı: %s\n", ktp->kitapAdi);
	printf("Yazar Adı: %s\n", ktp->yazar);
	printf("Kitap id: %d\n", ktp->kitap_id);
}

int main()
{
	kitap *siir1;
	kitap *yenikitap;
	kitap roman1;
	
	siir1= (kitap *)malloc(sizeof(kitap));	
	yenikitap= (kitap *)malloc(sizeof(kitap));
	
	memcpy(roman1.kitapAdi, "Savaş ve Barış", 50);
	memcpy(roman1.yazar, "Tolstoy", 50);
	roman1.kitap_id= 1;
	
	memcpy(siir1->kitapAdi, "A", 50);
	memcpy(siir1->yazar, "B", 50);
	siir1->kitap_id=3;
	
	
	kitap_bilgisi_ekle(yenikitap);
	
	kitap_yazdir(siir1);
	kitap_yazdir(yenikitap);
	kitap_yazdir(&roman1);
	
	
	return 0;	
}
