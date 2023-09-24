//Operator overloading

#include<iostream>
using namespace std;
class saydir{
private:
    int value;
public:
    saydir():value(5){}
    void operator++(){ //prefix
        ++value;
    }
    void display()
    {
        cout<<"elde edilen sonuc: "<<value<<endl;
    }
};
int main()
{
    saydir s1;
    ++s1;

    s1.display();

    return 0;
}



/*
c1
c2
sonuc=c1+c2
result=c1.topla(c2);

class name{
public:
    ....
    ....
    donustipi operator sembol(arguments){
    ...kodlar
    }


};
*/
