#include<stdio.h>
#include<conio.h>

int main()
{
    int vize=0,final=0;
    int *v,*f;
    printf("Vize ve Final notunu giriniz:");scanf("%d %d",&vize,&final);
    v=&vize;
    f=&final;
    *v=10;
    printf("Ortalamasi: %0.2f",( *v * 0.4) +( *f * 0.6));

    return 0;
}
