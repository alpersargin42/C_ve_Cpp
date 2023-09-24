#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int dizi[]={100,120,130,140};
    vector<int>v(dizi,dizi+4);
     int i;
    for(i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    //int a=v.begin();
    //cout<<a;
//    cout<<v.begin()<<endl;
    v.insert(v.begin()+2,8);



    for(i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}

