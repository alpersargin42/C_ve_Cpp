/*
Ad:Alper
Soyad:Sargın
Numara:201312030
Ödev_no: 2
*/
#include <iostream>
#include <ctime>
#include <stdlib.h>

using namespace std;

int indexArr()
{
    clock_t basla,bit;
    basla=clock();
    int i, dizi[1];

	for(i=0 ; i<2999999; i++)
	{ 	
	 dizi[1]=i;
	}
    bit=clock();
	cout <<"Index Array suresi:"<<(float)(bit - basla) / CLOCKS_PER_SEC<<endl;
}

int pointArr()
{
	clock_t basla,bit;
    basla=clock();
	int dizi2[1],*ptr,i;
	
	ptr=dizi2;

	for ( i = 0; i < 2999999; i++)
	{
		*(ptr)=i;
	}
	bit=clock();
	cout <<"Pointer Array suresi:"<<(float)(bit - basla) / CLOCKS_PER_SEC;
	
}

int main()
{
    indexArr();
	pointArr();
    return 0;
}
