//bir metnin içersinde karakter arama ve konumunu gösterme
#include <stdio.h>
#include <conio.h>
#include<string.h>
int main()
{
	char metin[50], ara, *ilk, *son;
	printf("istediginiz metni giirniz: ");
	scanf("%s", metin);
	printf("aramak istediginiz harfi giriniz: ");
	ara=getch();
	printf(" %s - %c ", metin, ara);
	
	ilk=strchr(metin, ara);
	son=strrchr(metin, ara);
	
	if (ilk!=NULL)
	{
		printf("\n ilk konum= %d", ilk-metin+1);
		printf("\n son konum= %d ",son-metin+1);
	}
	else
		printf("eşleşme bulunamadı");
	
	
	return 0;
}