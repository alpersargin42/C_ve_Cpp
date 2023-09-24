#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define SIZE 6

void main()
{ int dizi[SIZE]={7,4,8,2,1,6};
  int gecici,i,k;

  for (i = 0; i < SIZE; ++i)
     printf("%4d ",dizi[i]);

  printf("\n\n\nKabarcik Siralama Algoritmasi ile siralamA\n");
  
  for(k=0; k<SIZE-1; k++)
  { for(i=0; i<SIZE-1-k; i++)
      if( dizi[i]> dizi[i+1])
      { gecici = dizi[i];
        dizi[i] = dizi[i+1];
        dizi[i+1] = gecici;
      }
  }

  for(i=0;i<SIZE; i++)
    printf("%4d ", dizi[i]);
  getch();
}
