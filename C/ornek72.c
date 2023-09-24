#include <stdio.h>
int main()
{
	FILE *dosya;
	char kr;
	
	dosya=fopen("d:\\yaz.txt", "w");
	
	if (dosya==NULL)
	{
		puts("Dosya acilmiyor");
		getch();
		exit(0);
	}
	
	//dosyaya yazma
	kr='A';
	fputc(kr, dosya);
	fclose(dosya);
	return 0;
}