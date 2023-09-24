//dizi örneði
#include <iostream>
using namespace std;
int main()
{
	int dizi[5]={1,8,10,6,7},i ;
		    //   0 1  2 3 4 
	dizi[2]=15;
	for(i=0;i<5;i++)
		cout<<dizi[i]<<" i="<<i <<endl;
	
	return 0;
}
