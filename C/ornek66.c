#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	int i;
	char str[]="F! 3";
	for(i=0;i<strlen(str);i++)
	{
		if (isalpha(str[i]))
			printf("%c => karakter\n", str[i]);
		else if(isdigit(str[i]))
			printf("%c => rakam \n", str[i]);
		else if(ispunct(str[i]))
			printf("%c => özel karakter(rakam ve karakter harici)\n", str[i]);
		else if(isspace(str[i]))
			printf("%c => bosluk, altsatir, tab,...\n", str[i]);
			
		if(isupper(str[i]))	
			printf("%c => küçük harfe çevrildi\n", tolower(str[i]));
			
	}
 return 0;
}