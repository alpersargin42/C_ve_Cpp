#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> l1,l2;
    int arr1[]={10,20,35,18};
    int arr2[]={15,25,35,45,20};
    int i;
    for(i=0;i<4;i++)
        l1.push_back(arr1[i]);
    for(i=0;i<5;i++)
        l2.push_back(arr2[i]);
    l1.reverse(); //ters �evir
    l1.merge(l2); //birle�tirir
    l1.unique();// ayn� de�erleri teke indirir

    while(!l1.empty())
    {
        cout<<l1.front()<<endl; // ilk eleman
        l1.pop_front(); //ilk eleman
    }
    return 0;
}
