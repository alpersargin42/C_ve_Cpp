#include <stdio.h>
#include <time.h>

int main()
{
	time_t saniye;
	saniye= time(NULL);
	
	printf("01/01/1970 bugune kadar olan zaman geçen süre");
	
	printf("Saniye olarak %ld\n", saniye);
	printf("Saat olarak %ld\n", saniye/3600);
	printf("Gün olarak %ld\n", saniye/86400);
	
	
	return 0;
}