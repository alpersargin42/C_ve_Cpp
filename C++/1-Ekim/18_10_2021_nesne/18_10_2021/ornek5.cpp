
#include <iostream>
using namespace std;
int main()
{
	int dizi[][3]={{2,5,3},{1,9,8}};
	int dizi1[][3]={2,5,3,1,9,8};
	int dizi2[3][2]={2,5,3,1,9}; //satýr - sütun
	/* dizi1
	sütun      0,1,2
	0.satýr => 2,5,3
	1.satýr => 1,9,8	
	*/	
	int i,j;
	//cout<<dizi2[2][1];
	for(i=0;i<2;i++)   //satýr
		for(j=0;j<3;j++) //sütun
			cout<<dizi1[i][j]<<" ";
		
return 0;
}
