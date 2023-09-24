#include<iostream>
#include<algorithm>
using namespace std;

void metre_to_cm(double a)
{ cout<<a*100<<endl;
}
int main()
{
    double metre[]={3.5,6.2,1.0,12.75,4.33};

    //for_each(arr, arr+boyut,fonksyion)
    for_each(metre, metre+5, metre_to_cm);
   /* int i;
    for(i=0;i<5;i++)
        metre_to_cm(metre[i]);*/
    return 0;
}
