#include <iostream>
using namespace std;

class kamyon;
class araba{
	int hiz;
	public:
		araba(int h){hiz=h;}
		~araba(){}
		friend int fark(araba a1,kamyon k1); 
};

class kamyon{
	int hiz;
	public:
		kamyon(int h){hiz=h;}
		~kamyon(){}
		friend int fark(araba a1,kamyon k1); 
};

int fark(araba a1, kamyon k1){return a1.hiz-k1.hiz;}

int main()
{
	araba ar(80);
	kamyon km(90);
	cout<<fark(ar,km);
	
	return 0;
}

