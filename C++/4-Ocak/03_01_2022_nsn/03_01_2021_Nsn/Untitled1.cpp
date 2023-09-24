#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l1;
    l1.push_back(10); //sona ekler
    l1.push_back(20);

    l1.push_front(25);

    l1.push_back(30);

    l1.push_front(8);

    int i, boyut= l1.size();

    for(i=0;i<boyut;i++)
    {
        cout<<l1.front()<<endl; // ilk eleman
        l1.pop_front(); //ilk eleman
    }

    //cout<<l1.size()<<endl;

    return 0;
}
