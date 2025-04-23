#include <iostream>
#include <stdio.h>
using namespace std;
class ComplexNum
{
    int real;
    int img;
public:
   ComplexNum()
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
    ComplexNum(int _real,int _img)
    {
        real=_real;
        img=_img;
    }

    ~ComplexNum()
    {
        cout<<"\n";
        cout<<"delete object"<<endl;
    }
};
ComplexNum Add(ComplexNum c1,ComplexNum c2);
void myfun()
{
    ComplexNum c1,c2(5,6);
    c1.print();
    c2.print();
}
int main()
{
    ComplexNum comp;
    ComplexNum c1,c2;//c3,c4;
    //ComplexNum c(3,4);

   // ComplexNum c;
    int real_;
    int img_;
    cin>>real_>>img_;
    comp.setReal(real_);
    comp.setImg(img_);
    comp.print();
    //========================
   c1.setReal(10);
    c1.setImg(5);
    c2.setReal(5);
    c2.setImg(3);
    ComplexNum cc=Add(c1,c2);
    cc.print();
    //=========================
    c3.setReal(3);
    c3.setImg(1);
    c4.setReal(2);
    c4.setImg(3);

    c=c3.Add(c4);
     //c.print();
    //=====================

    ComplexNum c5;
     cout<<"before calling \n";
     myfun();
     cout<<"after calling\n";

    return 0;
}
ComplexNum Add(ComplexNum c1,ComplexNum c2)
{
    ComplexNum res;
    res.setReal(c1.getReal()+c2.getReal());
    res.setImg(c1.getImg()+c2.getImg());
    return res;
}



