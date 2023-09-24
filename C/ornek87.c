#include <stdio.h>
int main()
{
	int a[5],i;
	FILE *dosya=fopen("bilgi.dat","rb");
	if(dosya==NULL)
	{
		printf("dosya acilamadi"); exit(0);
	}
	else
	{
		fread(a, sizeof(int), 5, dosya);
		for(i=0;i<5;i++)
			printf("%d. eleman= %d \n", i+1, a[i]);
		printf("tamamdır");
		fclose(dosya);
	}
	
	return 0;
}