#include <iostream>
using namespace std;
class Shape{
protected:
    int genislik, yukseklik;
public:
    void setgenislik(int g) {genislik=g;}
    void setyukseklik(int y) {yukseklik=y;}
};
 class dikdortgen: public Shape{
 public:
     int alan(){return genislik*yukseklik;}
 };

int main()
{
    dikdortgen d1;
  /*  d1.setgenislik(5);
    d1.setyukseklik(3);
    cout<<d1.alan()<<endl;
*/
    Shape s1;
    s1.setgenislik(5);
    s1.setyukseklik(3);
    cout<<d1.alan()<<endl;



 return 0;
}
