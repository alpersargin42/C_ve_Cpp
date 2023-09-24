#include <stdio.h>
#include <conio.h>

int faktoriyel(int n )
{
    if (n<0)
    {
        printf("Hatalı Giriş.");
    }
    else if(n==0)
    {
        return 1 ;
    }
    else
    {
        return n*faktoriyel(n-1);
    } 
}

int main()
{
    printf("5 ! : %d",faktoriyel(5));
    return 0;
}
