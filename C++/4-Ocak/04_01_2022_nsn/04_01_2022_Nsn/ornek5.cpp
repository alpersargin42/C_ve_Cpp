//template s�n�f y���n kullan�m�
#include<iostream>
using namespace std;
template<class T, const int mak=100>
class yigin{
private:
    T dizi[mak];
    int top;
public:
    yigin(){top=-1;}
    void push(T a){dizi[++top]=a;}
    T pop(){return dizi[top--];}
    void goster(){
    for(int i=0;i<=top;i++)
        cout<<dizi[i]<<endl;
    }
};
int main()
{
    yigin <float> s1;
    s1.push(1.11f);
    s1.push(2.22f);
    cout<<"s1 in degerleri"<<endl;
    s1.goster();
    cout<<"-->"<<s1.pop()<<endl;
    yigin <int> s2;
    s2.push(3);
    s2.push(5);
    s2.push(5);
    s2.push(5);
    s2.push(5);
    s2.push(5);
    cout<<"s2 in degerleri"<<endl;
    s2.goster();

    yigin <char> s3;
    s3.push('a');
    s3.push('c');
    s3.push('x');
    cout<<"s3 in degerleri"<<endl;
    s3.goster();
    cout<<"-->"<<s3.pop()<<endl;
    cout<<"-->"<<s3.pop()<<endl;
    s3.goster();

    yigin <string> s4;
    s4.push("ayse");
    s4.push("fatma");

    cout<<"s4 in degerleri"<<endl;
    s4.goster();
    cout<<"-->"<<s4.pop()<<endl;


}

