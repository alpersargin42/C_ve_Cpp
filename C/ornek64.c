#include <stdio.h>
#include <math.h>

#define pi 3.14159265

int main()
{
  double derece, sonucsin, sonuccos,aci;
  printf("Aciyi giriniz: "); scanf("%lf", &aci);
  derece=aci*pi/180;
  sonucsin=sin(derece);
  printf("Sinus(%0.2f): %lf\n", aci, sonucsin);
  
  printf("Sinus(30): %lf\n", sin(30)); 
  
  sonuccos=cos(derece);
  printf("Cosinus(%0.2f): %lf", aci, sonuccos);
  
  
  return 0;
}

/*
sin30 = 1/2
derece=aci*pi/180 */

