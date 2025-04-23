#include <iostream>
#include <stdio.h>
using namespace std;
class ComplexNum
{
    int real;
    int img;
public:
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


};

int main()
{
    ComplexNum comp;
    int real_;
    int img_;
    cin>>real_>>img_;
    comp.setReal(real_);
    comp.setImg(img_);
    if(img_<0)
    {
        cout<<comp.getReal()<<comp.getImg()<<"i";
    }
    else if(img_==0)
    {
        cout<<comp.getReal();
    }
    else
    {
        cout<<comp.getReal()<<"+"<<comp.getImg()<<"i";
    }

    return 0;
}


