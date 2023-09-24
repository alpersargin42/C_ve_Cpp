#include <iostream>
using namespace std;

class test{
	int sayi;
	public:
		test(int n){sayi=n;}
		int deger(){return sayi;}
		~test(){}
};
int kare(test t1){
	t1=test(t1.deger()+1); //5+1
	cout<<"t1 in degeri: "<<t1.deger()<<endl;
	return t1.deger()*t1.deger();  //36
}
int kare2(test &t2){  //6
	t2=test(t2.deger()+1); //7
	return t2.deger()*t2.deger(); //49
}
int main()
{
	test a(5), b(6), c(4);
	cout<<"a: "<<a.deger()<<" - b:"<<b.deger()<<endl;
	cout<<kare(a)<<endl;
	cout<<kare2(b)<<endl;
	cout<<"a: "<<a.deger()<<" - b:"<<b.deger()<<endl;
	return 0;
}
