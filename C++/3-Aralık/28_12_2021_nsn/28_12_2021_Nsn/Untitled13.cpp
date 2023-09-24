//iterator kullan�m�
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v1;
    vector<int>::iterator v1_iter;
   // vector<int>::const_iterator v1_iter1;
    v1.push_back(10);
    v1.push_back(20);
    for(v1_iter=v1.begin();v1_iter!=v1.end();v1_iter++)
        cout<<*v1_iter<<endl;
    v1_iter=v1.begin();
    *v1_iter=205;
   for(v1_iter=v1.begin();v1_iter!=v1.end();v1_iter++)
      cout<<*v1_iter<<endl;
  /*  v1_iter1=v1.begin();
    *v1_iter1=35;
   for(v1_iter1=v1.begin();v1_iter1!=v1.end();v1_iter1++)
        cout<<*v1_iter1<<endl;
*/
    v1[0]=11;
    int i;
    for(i=0;i<v1.size();i++)
        cout<<v1[i]<<endl;

    return 0;
}
