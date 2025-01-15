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
void funComp(ComplexNum cpl);

int main()
{
    ComplexNum comp;
    int real_;
    int img_;
    cin>>real_>>img_;
    comp.setReal(real_);
    comp.setImg(img_);

    funComp(comp);
    return 0;
}

void funComp(ComplexNum cpl)
{


    if(cpl.getImg()<0)
    {
        cout<<cpl.getReal()<<cpl.getImg()<<"i";
    }
    else if(cpl.getImg()==0)
    {
        cout<<cpl.getReal();
    }
    else
    {
        cout<<cpl.getReal()<<"+"<<cpl.getImg()<<"i";
    }

}
