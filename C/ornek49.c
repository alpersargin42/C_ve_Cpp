//alan genişletme örneği
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *ptr, i;
	ptr=(int *)calloc(5, sizeof(int));
	if(ptr==NULL) 
		printf("bellek yetersiz");
	else
	{
		printf("5 eleman için yer ayrılmıştır\n");
		for(i=0;i<5;i++)
		{	ptr[i]=i;
			printf(" %d ", ptr[i]);
		}
		ptr=(int *)realloc(ptr, sizeof(int)*10);
		if(ptr==NULL)
			printf("bellek yetersiz");
		else
			printf("\n10 tamsayi için yer genisletildi");
		free(ptr);
	}
	return 0;
}