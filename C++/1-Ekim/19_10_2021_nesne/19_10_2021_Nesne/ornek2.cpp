//toplama iþlemi yapan fonksiyon 
#include <iostream>
using namespace std;

int topla(int,int);
double topla(double, double);
int topla(int x) {return x+5;}

int main()
{
	int a=10,b=5;
	double c=10.5, d=21.8;
	cout << "a+b="<< a+b<<endl;		
	cout << "a+b= fonksiyon sonucu => "<< topla(a,b)<<endl;
	cout << "c+d= fonksiyon sonucu => "<< topla(c,d)<<endl;
	cout <<" 5 fazlasýný yaz => " << topla(8)<<endl;
 	return 0;
}
int topla(int x, int y){	return x+y; }
double topla(double x, double y){ return x+y; }



