#include <iostream>

using namespace std;
class Serial
{
    int Snumber;
    static int counter;
public:
    static int getCounter()
    {
        return counter;
    }
    void setSnumber(int _s){Snumber=_s;}
    int getSnumber(){return Snumber;}
    Serial()
    {
        Snumber=0;
        counter++;
    }
    Serial(int _Snumber)
    {
        Snumber=_Snumber;
        counter++;
    }
};
int Serial :: counter=0;
int main()
{
    Serial s;
    Serial s1(6);
    cout<<Serial::getCounter();

    return 0;
}
