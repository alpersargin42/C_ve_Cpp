#include <iostream>
#include <vector>
using namespace std;
//vector<veri_tipi>degisken_adi;
int main()
{
    vector<int>d;
    d.push_back(10);//eleman ekler
    d.push_back(15);
    d.push_back(20);
    d[1]=8;
    d.pop_back();//son elemaný çýkarýr
    cout<<d.size()<<endl;

    int i;
    for(i=0;i<d.size();i++)
        cout<<d[i]<<endl;
    return 0;
}

