/* Diziler alıştırma */
#include<conio.h>
#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");
    int dizi1[5]; //5 elemanlık dizi tanımlandı.(Hafızada 5 elemanlık yer açıldı.)
    int i;

    for (i=0;i<5;i++)                       /*Dizinin 5 elemanına da 0 değeri atandı.*/
    {
        dizi1[i]=0;                                
        printf("%d \n", dizi1[i]);
    }
    printf("---------------------------------- \n ");
    for (i=0;i<5;i++)                                   /* Dizinin her bir elemanının adresini gösterdik. */
    {
        printf("%d   %d \n", dizi1[i],&dizi1[i]);
    }
    printf("---------------------------------- \n ");
    
    int dizi2[5]={4,65,95,89,100};

    printf("Dizinin 2. elemani = %d \n",dizi2[2]); // Dizinin ikinci elemanını gösterdik(95'i)

    i=0;
    for(i=0;i<5;i++)                          /*Dizinin her bir elemanını ekranda gösterdik.*/
    {
		printf("%d ", dizi2[i]);
    }
    printf("\n ---------------------------------- \n ");

    i=0;
    int dizi3[3];                                                       /*Dizilerde her bir indise değer atama.*/

    for ( i = 0; i < 3; i++)
    {
        printf("%d.elemani giriniz=",i+1);scanf("%d",&dizi3[i]);
    }
    for (i = 0; i < 3; i++)
    {
        printf(" \n %d.eleman %d olarak atandi.",i+1,dizi3[i]);
    }
    

    return 0;
}
