#include<iostream>
using namespace std;
class Parent{
protected:
    int protected_id;
};
class Child: public Parent{
public:
    void setid(int x){protected_id=x;}
    void getid(){cout<<protected_id<<endl;}
};
int main()
{
    Child c1;
    c1.setid(5);
    c1.getid();
    //cout<<c1.protected_id<<endl;
    return 0;
}
