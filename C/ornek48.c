/*Hafızada ayırdığımız bölgeye dışarıdan aldığımız değerleri aktardık*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int *p1,*p2,n,i;
    printf("Dizinin Boyutu:");scanf("%d",&n);
    p1=(int *)calloc(n, sizeof(int));
    if (p1==NULL)
		printf("Bellekte yer ayrılamıyor");
    else
    {
        for(i=0, p2=p1;i<n;i++)
		{printf("%d. sayiyi giriniz:", i+1);	
		scanf("%d", p2++);
		}
        for(i=0 ,p2=p1+n;i<n;i++)
			printf("%d", *(p1++));
		free(p1);
    }
    
    return 0;
}
