
#include <iostream>
using namespace std;
int main()
{
	int dizi[5]={5,8,9,1,5};
	int *p,i;
	
	p=dizi;
	for(i=0;i<5;i++)
		cout<< *(p+i)<<endl;
return 0;
}
