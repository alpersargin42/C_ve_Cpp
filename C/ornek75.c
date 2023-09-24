#include <stdio.h>
int main()
{
	char kr;
	int say=0;
	FILE *dosya;
	
	if ((dosya=fopen("d:\\yaz.txt", "r"))==NULL)
	{
		printf("dosya açılmadı");
	}
	else{
	
	printf("Aranilacak karakteri giriniz: ");
	scanf("%c", &kr);
	
	while(!feof(dosya))
	{
		if (kr==fgetc(dosya))
			say++;
	}
	printf("%c karakterinden %d adet vardır", kr, say);
	fclose(dosya);
	}
	
	
	
	return 0;
}