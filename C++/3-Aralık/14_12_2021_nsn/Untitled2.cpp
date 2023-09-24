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
    void operator++(int){ //postfix
        value++;
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

    s1++;
    s1.display();

int i;
i++;

    return 0;
}



