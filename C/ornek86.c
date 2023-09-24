#include <stdio.h>
int main()
{
	int a[5]={2,5,9,5,3};
	FILE *dosya=fopen("bilgi.dat","wb");
	if(dosya==NULL)
	{
		printf("dosya acilamadi"); exit(0);
	}
	else
	{
		fwrite(a, sizeof(int), 5, dosya);
		printf("tamamdır");
		fclose(dosya);
	}
	
	return 0;
}