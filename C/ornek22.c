/* Dizi tanımlama */
#include <stdio.h>
int main()
{
	int dizi[5]={5,7,8,10,15};
/*
	int a=5,b=7,c=8,d=10,e=15; 
	int dizi[5]={5,7,8,10,15};
*/

	// dizi[0]  dizi[1]  dizi[2]  dizi[3]   dizi[4]
	int i;
/*	dizi[0]=0;
	dizi[1]=0;
	dizi[2]=0;
	dizi[3]=0;
	dizi[4]=0;*/
	for(i=0;i<5;i++) // 0 5 / 1 7/ 2 8/ 3 10 /4 15
		printf("%d.deger -%d \n",i+1,dizi[i]) ;
		/*
		i=0    dizi[0] = 0;
		i=1    dizi[1] = 0;
		i=2    dizi[2] = 0;
		i=3    dizi[3] = 0;
		i=4    dizi[4] = 0;
		*/
	/*for(i=0;i<5;i++)
		//printf("%d \n", dizi[i]);
		printf("%d   %d \n", dizi[i],&dizi[i]);*/
	
	
	return 0;
}