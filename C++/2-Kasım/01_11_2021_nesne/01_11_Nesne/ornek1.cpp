#include <iostream>
using namespace std;
class ornek{
	int i;
	float f;
	public:
		ornek(int,float);
		void yaz(){ cout<<i<<"-" <<f;}
};

ornek::ornek(int a, float b):i(a),f(b){}
/*ornek::ornek(int a, float b)
{ i=a; f=b;}
*/
int main()
{
	ornek o1(1, 2.5);
	o1.yaz();
	return 0;
}
