/* Dizilerde sayma */
#include <stdio.h>
int main()
{
	int i, dizi[105]; //dizi[104]
	for(i=0;i<105;i++) 
	{
		dizi[i]= (i*2);	
	}
	
	for(i=0;i<105;i++)
	{
		printf("%d  -  ", dizi[i]);
	}
	
	return 0;
}