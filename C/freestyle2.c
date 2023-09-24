/* İç içe döngülerde Alıştırmalar.*/
#include<conio.h>
#include<stdio.h>

int main()
{
    int i,j;
    for (i=1;i<3;i++)                 /* i = 1 j = 1 ,......*/
    {
        for (j=1;j<3;j++)
        {
            printf("\n i = %d - j = %d \n ",i,j);
        }
        
    }

    printf(" \n ------------------------------------ \n");
    
    int x,y;
    for (x=1;x<10;x++)                              /*Yıldız bastırma.*/
    {
        for (y=1;y<=x;y++)
         {
            printf("%c", '*');
        }
 
        printf("\n");
    }

    printf(" \n ------------------------------------ \n");
             
          x=0;
          y=0;   
         
        for (x=1;x<10;x++)                    /* Sayı bastırma */
        {
            for (y=1;y<=x;y++)
            {
                printf("%d", x);
            }
 
            printf("\n");
         }
  
    return 0;
}
