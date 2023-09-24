//Hafızada ayrılan alana değer ataması
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *p1 , *p2;
    int i;
    p1=(int *) malloc(sizeof (int)*10);
    if(p1==NULL)
    {
        printf("Bellekte yer ayrılamıyor");
    }
    else
    {
        p2=p1;
        for ( i = 0; i <= 9; i++)
        {
            *p1++=i;
        }
        for ( i = 0; i <= 9; i++)
        {
            //printf(" %d -", *(--p1));
			printf(" %d -", *p2++);
        }
        free(p1);
    }
    
    return 0;
}

