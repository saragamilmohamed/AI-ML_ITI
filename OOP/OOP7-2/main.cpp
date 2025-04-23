#include <iostream>
#include <stdio.h>
using namespace std;
class Complex
{
    int real;
    int img;
public:
   Complex()
    {
        real=img=0;
    }

    void setReal(int _real)
    {
        real=_real;
    }
    void setImg(int _img)
    {
        img=_img;
    }
    int getReal()
    {
        return real;
    }
    int getImg()
    {
        return img;
    }


    Complex(int _real,int _img)
    {
        real=_real;
        img=_img;
    }

   //OPERATOR <<
   friend ostream& operator<<(ostream& os ,Complex &c );



};
ostream& operator<<(ostream& os ,Complex &c )
   {
        if(c.getImg()<0)
        {
            os<<c.getReal()<<c.getImg()<<"i"<<endl;
        }
        else if(c.getImg()==0)
        {
            os<<c.getReal()<<endl;
        }
        else
        {
            os<<c.getReal()<<"+"<<c.getImg()<<"i"<<endl;
        }
       return os;
   }

int main()
{
   Complex c1(10,20);
   Complex c2(1,2);
   cout<<c1<<endl;
   cout<<c2<<endl;
    return 0;
}




