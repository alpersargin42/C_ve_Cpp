#include <stdio.h>
struct ogrenci{
	int numara;
	float notu;
	char isim[50];
} kayit = {108, 75.0, "Mehmet"};

int main()
{
	FILE *fp;
	if((fp=fopen("yaz.txt","w"))==NULL)
	{
		printf("Dosya açılamadi");
		exit(0);
	}
	else
	{
		fwrite(&kayit, sizeof(kayit),1,fp);
		fclose(fp);
	}
	return 0;
}