#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
char *isim[]={"dogan","ayse","zehra","fatma","ali"};
bool karsilastir(char *s1, char *s2)
{
    //cout<<"s1:"<<s1<<"s2:"<<s2<<endl;
    return (strcmp(s1,s2)<0)?true:false;
}

int main()
{
    int i;
    sort(isim, isim+5, karsilastir);
    for(i=0;i<5;i++)
        cout<<isim[i]<<endl;
    return 0;
}
