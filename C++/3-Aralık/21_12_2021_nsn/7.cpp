#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int s1[]={3,5,6,1,100};
    int s2[]={5,3,7};

    int *ptr=search(s1,s1+5,s2,s2+3);

    if (ptr==s1+5)
        cout<<"bulunamadý";
    else
        cout<<ptr-s1<<endl;


    return 0;
}
