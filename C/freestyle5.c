#include <stdio.h>

int hesapla(int a, int b, int *c)
{
    *c = a + b;
    return c;
}

int main()
{
    int *a = 1, b = 2, sonuc = 0;
    a=&sonuc;
    // hesapla(a, b, &sonuc);                
    printf("%p", a);                  
}
/*
pointer adresi almak için & işareti konulur.
pointera değer ataması yapmak için *v=1;
pointera adres ataması yaparken p=&sayi; => sayi değişirse p de değişecek bir nevi klonlama
=> atama yaparken * yok.
=> değeri göstermek için %d - *p
=>  adresi göstermek için  %p - p

*/