#include <iostream>

using namespace std;
class Frac
{
    int num;
    int den;
public:
    Frac()
    {
        num=1;
        den=1;
    }
    Frac(int _num)
    {
        num=_num;
        den=1;
    }
    Frac(int _num,int _den)
    {
        num=_num;
        den=_den;
    }
    void setNum(int _num)
    {
        num=_num;
    }
    void setDen(int _den)
    {
        den=_den;
    }
    int getNum()
    {
        return num;
    }
    int getDen()
    {
        return den;
    }
    void print()
    {

        cout<<getNum()<<"/"<<getDen()<<endl;
    }
    Frac operator+(Frac f)
    {
        Frac res;
        if(den==f.den)
        {
        res.num=num+f.num;
        res.den=den;
        }
        else
        {
            res.den=den*f.den;
            res.num=(num*f.den)+(f.num*den);
        }


        return res;
    }




};

int main()
{
    Frac f1(1,2);
    f1.print();
    cout<<endl;
    Frac f2(1,4);
    f2.print();
    cout<<endl;
    Frac f3;
    f3=f1+f2;
    f3.print();
    return 0;
}
