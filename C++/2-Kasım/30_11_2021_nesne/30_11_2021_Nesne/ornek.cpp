#include <iostream>
using namespace std;

int mutlakdeger(int a);
float mutlakdeger(float a);

int main()
{
	int sayi1=-5;
	float sayi2=-3.5;
	cout<<sayi1<<endl;
	cout<<mutlakdeger(sayi1)<<endl;	
//	if(sayi1<0) sayi1=sayi1 * -1;
	cout<<mutlakdeger(sayi2)<<endl;
	cout<<sayi1;
	return 0;
}

int mutlakdeger(int a)
{ /*if(a<0) a = a * -1;
	return a;*/
	//(koşul)? doğru : yanlış;
	return (a<0) ? (a * -1) : a;
}

float mutlakdeger(float a)
{
	return (a<0) ? (a * -1) : a;
}
