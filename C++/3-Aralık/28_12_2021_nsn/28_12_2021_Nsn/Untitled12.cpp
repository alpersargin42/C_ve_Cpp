#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(15);
    v1.push_back(25);
    v1.push_back(45);
    int &i=v1.back();
    int &j=v1.front();
    cout<<"sonuncu eleman= "<<i<<endl;
    cout<<"baþtaki eleman= "<<j<<endl;

    const vector<int> v2=v1;
    //v2.push_back(15);

    const int &i2=v2.back();
    const int &j2=v2.front();
    cout<<"sonuncu eleman= "<<i2<<endl;
    cout<<"baþtaki eleman= "<<j2<<endl;
    cout<<"baþtaki eleman= "<<v2.front()<<endl;
    return 0;
}
