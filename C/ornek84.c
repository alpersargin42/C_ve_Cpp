#include <stdio.h>
#include <string.h>
typedef struct ogr{
	int no;
	char *isim;
	char *bolum;
}ogrenci;


int main()
{
	while(1)
	{
		printf("1.Yeni kayıt ekle\n");
		printf("2.Kayit ara\n");
		printf("3.Çıkış\n");
		printf("Seçiminizi yapınız: ");
		int secim;
		scanf("%d", &secim);
		if(secim==1)
		{
			//yeni kayıt ekleme
			FILE *fp=fopen("kayit.txt","a");
			//açılış kontrolü mutlaka yapılmalı !!!
			ogrenci a;
			a.isim=(char*)malloc(sizeof(char)*20);
			a.bolum=(char*)malloc(sizeof(char)*20);
			printf("isim giriniz: "); scanf("%s", a.isim);
			printf("bolum giriniz: "); scanf("%s", a.bolum);
			printf("no giriniz:"); scanf("%d", &a.no);
			fprintf(fp, "%s %s %d \n", a.isim,a.bolum, a.no);
			fclose(fp);
			
		}
		if(secim==2)
		{
			//kayit ara
			FILE *fp=fopen("kayit.txt","r");
			//açılış kontrolü mutlaka yapılmalı !!!
			char ara[100];
			printf("aramak istediğiniz kisinin adini giriniz: ");
			scanf("%s", ara);
			ogrenci b;
			b.isim=(char*)malloc(sizeof(char)*20);
			b.bolum=(char*)malloc(sizeof(char)*20);
			while(!feof(fp))
			{
				fscanf(fp,"%s %s %d",b.isim, b.bolum, &b.no);
				if(strcmp(ara, b.isim)==0)
					printf("%s %s %d\n",b.isim, b.bolum, b.no);
			}
			printf("kayit bulundu\n");
			fclose(fp);
		}
		if(secim==3)
			break;
	}
	
	return 0;
}