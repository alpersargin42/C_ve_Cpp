#include<stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
	char *gun[7]={"Pazartesi","Salı","Çarşamba","Perşembe","cuma","cumartesi","pazar"};	
	int i;
	for(i=0;i<7;i++)
	{
		printf(" %d. gün %s \n",i+1,gun[i]);
	}
	
	return 0;
}
/*
gun[0]="pazartesi"; 
gun[1]="salı";
%S

gun[0]='a'
gun[1]=y
%c

*/