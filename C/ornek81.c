#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define SIZE 6

void main()
{ int dizi[SIZE]={7,4,8,2,0,1};
  int i,j,min,gecici;
  printf("\n\n\nSecmeli Siralama Algoritmasi ile siralama\n");

  for (i = 0; i < SIZE; i++)
  { min = i;
    for (j = i + 1; j < SIZE; j++)
    { if (dizi[j] < dizi[min])
       {min = j; printf("i=%d j=%d min=%d dizi[i]=%d dizi[j]=%d\n",i,j,min,dizi[i],dizi[j]);
	   }
    }
    gecici = dizi[i];
    dizi[i] = dizi[min];
    dizi[min] = gecici;
  }

  for(j=0;j<SIZE; j++)
    printf("%4d ", dizi[j]);
  getch();
}
