/*10.hafta typedef struct normal kullanımı*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct kitap{
	char kitapAdi[50];
	char yazar[50];
	int kitap_id;
}kitap;

int main()
{
	/* kitap tipinde değişkenimizi oluşturuyoruz */
	kitap roman1;
	/* structımızdaki değişkenlere değerlerini veriyoruz */
	memcpy(roman1.kitapAdi, "Savaş ve Barış", 50);
	memcpy(roman1.yazar, "Tolstoy", 50);
	roman1.kitap_id= 1;
	/*değişkenlerimizi ekrana yazdırıyoruz */
	printf("Kitap Adı: %s\n", roman1.kitapAdi);
	printf("Yazar Adı: %s\n", roman1.yazar);
	printf("Kitap id: %d", roman1.kitap_id);

	return 0;
}