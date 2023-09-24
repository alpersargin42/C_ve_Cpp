//Operator overloading

#include<iostream>
using namespace std;
class saydir{
private:
    int value;
public:
    saydir():value(5){}
    saydir operator++(){ //prefix
        saydir gecici;
        gecici.value=++value;
        return gecici;
    }
    saydir operator++(int){ //postfix
        saydir gecici;
        gecici.value=value++;
        return gecici;
    }
    void display()
    {
        cout<<"elde edilen sonuc: "<<value<<endl;
    }
};
int main()
{
    saydir s1, sonuc;
    sonuc = ++s1;
    sonuc.display();

    sonuc=s1++;
    sonuc.display();

    return 0;
}



