/*dýþarýdan girilen vize ve final noturna göre 
öðrencinin dersten geçip geçmediðini bulunuz
geçme notu=60
*/
#include <iostream> 
using namespace std; 

int main () {
	int v,f; 
	float toplam; 
	cout <<"Vize notunu giriniz \n"; 
	cin >>v; 
	cout <<"final notunu giriniz \n"; 
	cin >>f; 
	if ((v>=0 && v<=100) && (f>=0 && f<=100)) 
	{ 
		toplam=(v*0.4)+(f*0.6); 
		if (toplam>=60)  
			cout <<"Geçtiniz \n"; 
		else 
			cout <<"Kaldýnýz \n";
	}
	else 
	cout <<"Geçerli bir not giriniz \n"; 
	return 0;
} 

