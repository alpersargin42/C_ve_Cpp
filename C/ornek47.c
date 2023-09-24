//Hafızada yer ayırma işlemi
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *p1;
    p1=(int *) malloc(10);
    if(p1==NULL)
    {
        printf("Bellekte yer ayrılamıyor");
    }
    else
    {
        printf("Bellekte yer ayrıldı.");
    }
    
    return 0;
}
