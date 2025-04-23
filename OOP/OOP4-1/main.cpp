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
   /* ComplexNum Add(ComplexNum c3)
    {
        ComplexNum res;
        res.setReal(c3.real+real);
        res.setImg(c3.img+img);
        return res;
    }*/
    Complex(int _real,int _img)
    {
        real=_real;
        img=_img;
    }
    //complex+complex
    Complex operator+ (Complex c)
    {
        Complex res;
        res.real=real+c.real;
        res.img=img+c.img;
        return res;
    }
    //complex +int
    Complex operator+(int x)
    {
        Complex res;
        res.real=real+x;
        res.img=img;
        return res;
    }
    // operator ==
    int operator ==(Complex c)
    {
        //return (real==c.real && img==c.img )
        if(real==c.real && img==c.img )
            return 1;
        else
            return 0;
    }
    int operator != (Complex c)
    {
        return !(*this==c);
    }
    explicit operator int()
    {
        return real;
    }
    //prefix
    Complex operator++()
    {
         real++;
         return *this;
    }
    //postfix
    /*Complex operator++(int)
    {
        real++;
        return *this;
    }*/
    Complex  operator++(int)
    {
        Complex temp=*this;
        real++;
        return temp;
    }


   /* ~Complex()
    {
        cout<<"\n";
        cout<<"delete object"<<endl;
    }*/
friend Complex operator+ (int x ,Complex c);
};
//int +complex
Complex operator+ (int x ,Complex c)
{
    Complex res;
    res.real=c.real+x;
    res.img=c.img;
    return res;
}

int main()
{
   Complex c1(10,20);
   Complex c2(1,2);
   Complex c3,c4,c5,c6,c7;
   c3=c1+c2;
   c3.print();
   c4=c1+4;
   c4.print();
   c5=5+c1;
   c5.print();
   if(c1==c2)
      cout<<"equal"<<endl;
    else
      cout<<"not equal"<<endl;
   if(c1!=c2)
      cout<<"yes"<<endl;
    else
      cout<<"no"<<endl;
   int x;
   x=(int)c1;
   cout<<x<<endl;
   c6=++c1;
   c6.print();

   cout<<endl;
   c7=c1++;
   c7.print();

    return 0;
}




