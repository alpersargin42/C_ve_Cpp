#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int>l1(10);
    list<int>::iterator _i;

    cout<<l1.size()<<endl;

    int x;
    for(_i=l1.begin(),x=1 ;_i!=l1.end();)
    {
        *_i++=x*x; x++;
    }


    for(_i=l1.begin();_i!=l1.end();_i++)
        cout<<*_i<<endl;
    return 0;
}
