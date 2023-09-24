//while begin end kullanýmý
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1(10);
    vector<int>::iterator i;
    int deger=1;
    i=v1.begin();
    while(i!=v1.end())
    {
        *i++=deger*deger;
        deger++;
    }
    i=v1.begin();
    while(i!=v1.end())
    {
        cout<<*i++<<" " ;
    }
    cout<<endl;
    i=v1.begin();
    while(i!=v1.end())
    {
        *i++=(*i)*(*i);
    }
    i=v1.begin();
    while(i!=v1.end())
    {
        cout<<*i++<<" ";
    }

    //v1.erase(v1.begin());
    v1.erase(v1.begin(), v1.begin()+3);

    cout<<endl;
    i=v1.begin();
    while(i!=v1.end())
    {
        cout<<*i++<<" ";
    }



    v1.clear();
    cout<<v1.size()<<endl;
    return 0;
}
