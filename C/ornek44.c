#include<conio.h>
#include<stdio.h>

int main()
{
    int sayi,*p;

    sayi=10;

    p=&sayi;             // atama yaparken * yok.

    printf("%p",p); // => değeri göstermek için %d - *p
                    //=>  adresi göstermek için  %p - p

    return 0;
}
