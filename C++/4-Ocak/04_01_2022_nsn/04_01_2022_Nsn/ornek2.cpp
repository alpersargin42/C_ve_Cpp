//maksimum iþlemi
#include<iostream>
using namespace std;
template<typename T>
T maksimum(T x,T y)
{
    return (x>y)?x:y;
}
int main()
{
    cout<<maksimum(3,5)<<endl;
    cout<<maksimum(3.8,2.4)<<endl;
    cout<<maksimum<int>(8,7)<<endl;
    cout<<maksimum('a','x')<<endl;
}

