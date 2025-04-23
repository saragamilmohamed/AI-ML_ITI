#include <iostream>
#include <stdio.h>
using namespace std;
class Complex
{
    int real;
    int img;
    static int counter;
public:
    static int getCounter()
    {
        return counter;
    }
   Complex()
    {
        cout<<"constructor"<<endl;
        real=img=0;
        counter++;
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
    void print()
    {
        if(img<0)
        {
            cout<<getReal()<<getImg()<<"i"<<endl;
        }
        else if(img==0)
        {
            cout<<getReal()<<endl;
        }
        else
        {
            cout<<getReal()<<"+"<<getImg()<<"i"<<endl;
        }
    }

    Complex(int _real,int _img)
    {
        cout<<"constructor"<<endl;
        real=_real;
        img=_img;
        counter++;
    }



    ~Complex()
    {

        cout<<"\ndelete object";
        counter--;
    }

};

int Complex::counter=0;

int main()
{
   Complex c1(10,20);
   Complex c2(1,2);
   Complex c3;

   cout<<"Number of Counter : "<<Complex :: getCounter();

    return 0;
}




