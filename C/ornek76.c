#include <stdio.h>
int main()
{
	char dizi[80], ydizi[30]="gfkdgjkfdjglkfd";
	FILE *d1, *d2;
	
	if ((d1=fopen("d:\\yaz.txt", "r"))==NULL)
	{
		printf("dosya açılmadı");
	}
	else{
	
	fgets(dizi, 80, d1);
	printf("Okunan deger= %s" ,dizi);
	fclose(d1);
	
    }
    
    if ((d2=fopen("d:\\yaz.txt", "a+"))==NULL)
	{
		printf("dosya açılmadı");
	}
	else{
    
    fputs("\n", d2);
    fputs(ydizi, d2);
    
    printf("istenilen yeni veriler dosyaya eklendi");
    fclose(d2);
    
    }
	return 0;
}