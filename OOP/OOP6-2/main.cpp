#include <iostream>

using namespace std;
int add(int a,int b,int c)
{
    return a+b+c;
}
int Add(int a=4,int b=6,int c=7)
{
    return a+b+c;
}

int main()
{
    cout<<add(1,2,3)<<endl;
    cout<<Add()<<endl;
    cout<<Add(2)<<endl;
    cout<<Add(1,2)<<endl;
    cout<<Add(1,2,5)<<endl;

    return 0;
}
