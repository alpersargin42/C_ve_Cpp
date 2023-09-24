#include<iostream>
#include<algorithm>

using namespace std;
int main()
{

    int s1[]={33,22,88,11,9,75,89,100,5};
    int i;

    for(i=0;i<9;i++)
        cout<<s1[i]<<" \t ";
    cout<<endl;

    sort(s1,s1+9);

    for(i=0;i<9;i++)
        cout<<s1[i]<<endl;
    return 0;
}
