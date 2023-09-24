//toplama iþlemi yapan fonksiyon 
#include <iostream>
using namespace std;

//int topla(int,int);
int topla(int x=0, int y=0){	return x+y; }
double topla(double, double);
int main()
{
	int a=10,b=5;
	double c=10.5, d=21.8;
	cout << "a+b="<< a+b<<endl;		
	cout << "a+b= fonksiyon sonucu => "<< topla(a,b)<<endl;
	cout << "c+d= fonksiyon sonucu => "<< topla(c,d)<<endl;
	cout<< "parametresiz :"<<topla()<<endl;
	cout<< "sadece a degiskeni :"<<topla(a)<<endl;
	return 0;
}

double topla(double x, double y){ return x+y; }



