#include <stdio.h>
#include <conio.h>

int ekrana_yazdir(int a)
{
    
    if(a<=50)
    {
        printf("%d",a);
        ekrana_yazdir(a+1);
    }
}
int main()
{
    int i=0;
    ekrana_yazdir(i);

    return 0;
}
