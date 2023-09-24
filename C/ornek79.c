#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define SIZE 6
int dizi[SIZE]={7,4,8,2,1,6};
int gecici, i, j, k, pivot, sol=0, sag=SIZE-1;


void hsirala (int dizi[], int sol, int sag)
{ k=sol;     j=sag;     pivot=dizi[k];
  do
  { while((dizi[j] >= pivot) && (j>k))
      j--;
    if(k != j)
    { gecici=dizi[k];
      dizi[k]=dizi[j];
      dizi[j]=gecici;
      k++;
    }
    while((dizi[k] <= pivot) && (j>k))
      k++;
    if(k != j)
    { gecici=dizi[j];
      dizi[j]=dizi[k];
      dizi[k]=gecici;
      j--;
    }
  }while (k<j);
  if((sol+1)<k)
    hsirala(dizi,sol,k-1);
  if((sag-1)>k)
    hsirala(dizi,k+1,sag);
}
void main()
{ 
  printf("\n\n\nHizli Siralama Algoritmasi ile siralama\n");
  hsirala(dizi,sol,sag);
  for(j=0;j<SIZE; j++)
    printf("%4d ", dizi[j]);
  getch();
}
