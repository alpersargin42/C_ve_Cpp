//hepsi kar���k �rnek
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;  //uzunlu�u 0
    vector<char> v2(10);
    vector<char> v3(10,'x');
    vector<int> v4(v1);
    vector<int> v5(10);
    vector<int> v6={1,2,5,9,11,6,1};
    vector<int>::iterator itr;
    int i;
    for(i=0;i<10;i++)
        v1.push_back(i+1);
    cout<<"v1 in iceri�i"<<endl;
    for(itr=v1.begin();itr!=v1.end();itr++)
        cout<<*itr<<" ";
    for(i=0;i<10;i++)
        v2[i]=i*i;
    cout<<"v2 in iceri�i"<<endl;
//    for(itr=v2.begin();itr!=v2.end();itr++)
    for(i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
   cout<<"v3 un iceri�i"<<endl;
    for(i=0;i<v3.size();i++)
        cout<<v3[i]<<" ";
    cout<<"v4 un iceri�i"<<endl;
    for(itr=v4.begin();itr!=v4.end();itr++)
        cout<<*itr<<" ";
    fill(v5.begin(), v5.end(), 5);
    cout<<"v5 un iceri�i"<<endl;
    for(itr=v5.begin();itr!=v5.end();itr++)
        cout<<*itr<<" ";
    cout<<"v6 un iceri�i"<<endl;
    for(itr=v6.begin();itr!=v6.end();itr++)
        cout<<*itr<<" ";
    cout<<"v1 nin uzunluugu="<<v1.size()<<endl;
    cout<<"v2 nin uzunluugu="<<v2.size()<<endl;
    cout<<"v3 nin uzunluugu="<<v3.size()<<endl;
    cout<<"v4 nin uzunluugu="<<v4.size()<<endl;
    cout<<"v5 nin uzunluugu="<<v5.size()<<endl;
    cout<<"v6 nin uzunluugu="<<v6.size()<<endl;
    return 0;
}
