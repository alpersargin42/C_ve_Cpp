#include<iostream>
#include<algorithm>
using namespace std;

double metre_to_cm(double a)
{ return (a*100);
}
int main()
{
    double metre[]={3.5,6.2,1.0,12.75,4.33};
    double cm[5];

    transform(metre, metre+5, cm, metre_to_cm);
  int i;
    for(i=0;i<5;i++)
        cout<< cm[i]<<endl;
    return 0;
}
