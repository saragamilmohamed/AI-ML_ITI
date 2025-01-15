#include <iostream>
#include <cmath>
#include <iomanip>

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

        cout<<getNum()<<"/"<<getDen()<<" ";
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

    Frac operator*(Frac f)
    {
        Frac res;
        res.num=num*f.num;
        res.den=den*f.den;
        res.simplify();
        return res;
    }







};

int main()
{

   int deno;
   cin>>deno;
   for(int i=1;i<deno;i++)
   {
       Frac f(i,deno);
       Frac f1;
       f1=f;
       f1.simplify();
       f1.print();
   }
   cout<<endl<<"--------------------------------"<<endl;
   for(int i=1;i<deno;i++)
   {
       Frac f4(i,deno);
       Frac f5;
       f5=f4;
       f5.simplify();
       f5.print();
       cout<<" ";
       for(int j=1;j<deno;j++)
       {
           Frac f(i,deno);
           Frac f1(j,deno);
           Frac f2;
           f2=f*f1;
           f2.print();
       }
       cout<<endl;
   }

    return 0;
}
