#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int s1[]={2,3,5,6,7}, s2[]={8,9,10};
    int i,dest[8];

    //merge(baþlangýç, bitiþ, baþlangýç,bitiþ, hedef)
    merge(s1,s1+5,s2,s2+3,dest);

    for(i=0;i<8;i++)
        cout<<dest[i]<<endl;
    return 0;
}
