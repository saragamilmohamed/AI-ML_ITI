#include <iostream>
#include <cmath>
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
    int gcd(int a, int b){
        while(b !=0)
        {
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;}
    void simplify()
    {

        int g = gcd(num, den);
        num /= g;
        den /= g;

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

        res.simplify();
        return res;
    }
    Frac operator-(Frac f)
    {
        Frac res;
        if(den==f.den)
        {
        res.num=num-f.num;
        res.den=den;
        }
        else
        {
            res.den=den*f.den;
            res.num=(num*f.den)-(f.num*den);
        }


        res.simplify();
        return res;
    }

    //*
    Frac operator*(Frac f)
    {
        Frac res;
        res.num=num*f.num;
        res.den=den*f.den;
        res.simplify();
        return res;
    }
    // /

    Frac operator/(Frac f)
    {
        Frac res;
        if (f.num != 0) {
            res.num = num * f.den;
            res.den = den * f.num;
        } else {
            cout << "Error: Division by zero" << endl;
            res.num = 0;
            res.den = 1;
        }
        res.simplify();
        return res;
    }
    Frac operator++()
    {
        num++;
        simplify();
        return *this;
    }
    Frac operator++(int)
    {
        Frac temp=*this;
        num++;
        temp.simplify();
        return temp;
    }
    Frac operator--()
    {
        num--;
        simplify();
        return *this;
    }
    Frac operator--(int)
    {
        Frac temp=*this;
        num--;
        temp.simplify();
        return temp;
    }

    explicit operator float() {
        return static_cast<float>(num) / den;
    }






};

int main()
{
    Frac f1(1,2);
    f1.print();
    Frac f2(1,4);
    f2.print();

    Frac f3;
    f3=f1+f2;
    f3.print();

    Frac f4;
    f4=f1-f2;
    f4.print();

    Frac f5;
    f5=f1*f2;
    f5.print();

    Frac f6;
    f6=f1/f2;
    f6.print();

    Frac f7;
    f7=f1++;
    f7.print();

    Frac f8;
    f8=--f2;
    f8.print();

    float f=(float)f3;
    cout<<f;




    return 0;
}
