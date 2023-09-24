#include <iostream>
#define FIRST_SIZE 100
using namespace std;

class yol{
private:
    double w;
    double x;
    double b;
    double cikisDeger;
public:
    yol(double _w , double _b,double _c);
    yol();
    void setx(double _x){x=_x;}
    void getx(double _x){x=_x;}
    double cikis();
    double getCikis(){return cikisDeger;}
};
yol :: yol(double _w,double _b,double _c)
{
    w=_w;
    b=_b;
    cikisDeger=_c;
    w=0.1;
    x=0.0;
    b=0.2;
}
double yol::cikis()
{
    double cikisDeger=(w*x)+b;
    return cikisDeger;
}

class noron{
private:
    yol *onceki;
    yol *sonraki;
    int onceki_count;
    int sonraki_count;
    int esik;
    int son;
public:
    noron();
    noron(yol *o_ptr,yol* s_ptr,int o_count,int s_count,int _son);
    void setEsik(int _e){esik=_e;}
    double toplamHesapla();
    double cikisUret();
};

noron::noron(yol *o_ptr,yol* s_ptr,int o_count,int s_count,int _son)
{
    onceki=o_ptr;
    sonraki=s_ptr;
    onceki_count=o_count;
    sonraki_count=s_count;
    son=_son;
}
double noron::toplamHesapla()
{
    double toplam = 0.0;
    for (int i = 0; i < onceki_count; i++)
    {
        toplam+=onceki->getCikis()+i;
    }
    return toplam;
}
double noron::cikisUret()
{
    double toplamDeger=toplamHesapla();
    double cikisDeger=0.0;
    if (toplamDeger<esik)
    {
        cikisDeger=0.0;
    }
    else if (toplamDeger>son)
    {
        cikisDeger=0.0;
    }
    else
        cikisDeger=1.0;
    for (int i = 0; i < sonraki_count; i++)
    {
       (sonraki+i)->setx(cikisDeger);
    }
    
}

int main(void)
{
    yol *yolptr;
    noron *noronptr;
    for (int i = 0; i < FIRST_SIZE; i++)
    {
        *(yolptr+i);
    }
    for (int i = 0; i < FIRST_SIZE; i++)
    {
        *(noronptr+i);
    }
    return 0;
}
