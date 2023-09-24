/*10.hafta typedef struct pointer ile  kullanımı*/
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
	/* kitap tipinde pointer değişkenimizi oluşturuyoruz */
	kitap *kitap1;
	/*değişkenimizin üzerine yer alıyoruz */
	kitap1= (kitap *)malloc(sizeof(kitap));


	/* structımızdaki değişkenlere değerlerini veriyoruz */
	memcpy(kitap1->kitapAdi, "Savaş ve Barış", 50);
	memcpy(kitap1->yazar, "Tolstoy", 50);
	kitap1->kitap_id=3;
	
	/*değişkenlerimizi ekrana yazdırıyoruz */
	printf("Kitap Adı: %s\n", kitap1->kitapAdi);
	printf("Yazar Adı: %s\n", kitap1->yazar);
	printf("Kitap id: %d", kitap1->kitap_id);
	free(kitap1);
	
	return 0;	
}