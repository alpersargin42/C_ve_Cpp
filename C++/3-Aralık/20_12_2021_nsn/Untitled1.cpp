#include<iostream>
using namespace std;
class test{
public:
    int x,y;
    test(){x=0;y=0;}
    test(int, int);
    bool operator>(test t3);
    bool operator<(test t3);
};

test::test(int a, int b){x=a; y=b;}

bool test::operator>(test t3)
{
    return (x>t3.x && y>t3.y);
}   //t1.x > t2.x   && t1.y> t2.y

bool test::operator<(test t3)
{
    return (x<t3.x && y<t3.y);
}  // t1.x<t2.x   && t1.y<t2.y


int main()
{
    test t1(3,5), t2(8,10),t4;
    //t1.x=3;
    if(t1>t2)
       cout<<"t1 in bütün deðerleri büyüktür"<<endl;
    else
        cout<<"t1 kucüktür"<<endl;

    if(t1<t2)
        cout<<"t1 t2 den kucuktur"<<endl;
    else
        cout<<"t1 büyüktür"<<endl;
}
