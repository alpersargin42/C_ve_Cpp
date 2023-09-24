//dışarıdan alınan değerlerin ortalamasını bulma
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *dizi, i, toplam=0, n;
	float ortalama;
	printf("eleman sayisini giriniz:");scanf("%d", &n);
	dizi=(int *) malloc(n*sizeof(int));
	if(dizi==NULL)
		printf("bellek yeterli değil");
	else
	{
		puts("elemanları giriniz:");
		for(i=0;i<n;i++)
		{
			printf("%d. eleman:",i+1);
			scanf("%d", &dizi[i]);
			toplam+=dizi[i];	
		}	
		ortalama=(float)toplam/n;
		printf("\n sayıların ortalaması: %f", ortalama);
		free(dizi);
	}	
	
	
	return 0;
}