//toplama iþlemi yapan fonksiyon 
#include <iostream>
using namespace std;

//int topla(int x,int y);
int topla(int,int);
int main()
{
	int a=10,b=5;
	cout << "a+b="<< a+b<<endl;		
	cout << "a+b= fonksiyon sonucu => "<< topla(a,b)<<endl;
	cout << "a+b= fonksiyon sonucu => "<< topla(8,9)<<endl;
 	return 0;
}

int topla(int x, int y)
{
	return x+y;
	//.....
	/*int sonuc;
	sonuc=x+y;
	return sonuc;*/
}




