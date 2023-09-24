#include <iostream>
#include <vector>
using namespace std;

int main()
{
    double dizi[]={1.1,2.2,3.3,4.4};
    vector<double>v1(dizi,dizi+4);
    vector<double>v2(2);
    int i;
    cout<<"v1"<<endl;
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<endl;
    cout<<"v2"<<endl;
    for(i=0;i<v2.size();i++)
        cout<<v2[i]<<endl;

    v1.swap(v2);
    cout<<"v1"<<endl;
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<endl;
    cout<<"v2"<<endl;
    for(i=0;i<v2.size();i++)
        cout<<v2[i]<<endl;

    while(!v2.empty())
    {
        cout<<v2.back()<<endl;//sonuncu eleman
        v2.pop_back(); //çýkar
    }
    cout<<"while bitti"<<endl;
  /*  for(i=0;i<v2.size();i++)
        cout<<v2[i]<<endl;
*/

    while(!v1.empty())
    {
        cout<<v1.back()<<endl;//sonuncu eleman
        v1.pop_back(); //çýkar
    }

    return 0;
}

