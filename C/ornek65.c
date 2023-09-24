#include <stdio.h>
#include <ctype.h>

int main()
{
	int i;
	char kr;
	for(i=32;i<127;i++)
	{
		kr=toascii(i);
		printf("%d \t%c \t%c \t%c \t%d\n", i, kr,i, tolower(kr), isdigit(kr));
		//tolower=>büyük - küçük
	}

 return 0;
}