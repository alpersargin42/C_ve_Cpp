#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define SIZE 6
void main()
{ int dizi[SIZE]={7,4,8,2,1,6};
  int i,j,gecici;
 
  printf("\n\n\nEklemeli Siralama Algoritmasi ile siralama\n");
  
  for(i=1; i<SIZE; i++)
  { 
    gecici = dizi[i];
    j = i-1;
    while(gecici<dizi[j] && j>=0)
    { dizi[j+1] = dizi[j];
      j = j-1;
    }
    dizi[j+1] = gecici;

  }
  for(i=0;i<SIZE; i++)
    printf("%4d ", dizi[i]);
  getch();
}
