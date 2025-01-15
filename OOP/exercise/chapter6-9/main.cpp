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







};

int main()
{
    char c;
    do{
    int x,y,z,j;
    cin>>x>>y>>z>>j;
    Frac f1(x,y);
    f1.print();
    Frac f2(z,j);
    f2.print();

    Frac f3;
    f3=f1+f2;
    f3.print();
    cout<<"if u wanna continue press y if no press another character"<<endl;
    cin>>c;
    }while(c=='y'||c=='Y');








    return 0;
}
