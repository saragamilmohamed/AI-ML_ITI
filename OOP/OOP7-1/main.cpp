#include <iostream>

using namespace std;

class Shape
{
protected:
    int dim1;
    int dim2;
public:
    Shape()
    {
        dim1=dim2=1;
    }
    Shape(int _dim1)
    {
        dim1=dim2=_dim1;
    }
    Shape(int _dim1,int _dim2)
    {
        dim1 = _dim1;
        dim2 = _dim2;
    }
    virtual void setDim1(int _dim1){ dim1 =_dim1;}
    virtual void setDim12(int _dim2){ dim2 =_dim2;}
    int getDim1(){return dim1;}
    int getDim2(){return dim2;}
    virtual int calcArea()=0;
};

class Rect:public Shape
{
public:
    Rect(int _dim1):Shape(_dim1){}
    Rect(int _dim1,int _dim2):Shape(_dim1,_dim2){}
    int calcArea()
    {
        return dim1*dim2;
    }
};
class Square:public Rect
{
public:
    Square(int _dim1):Rect(_dim1){}
    Square(int _dim1,int _dim2):Rect(_dim1,_dim2){}

   void print()
    {
        cout<<dim1 <<":"<<dim2<<endl;
    }
    void setDim1(int _dim1){dim1=dim2=_dim1;}
    void setDim2(int _dim2){dim2=dim1=_dim2;}
    int calcArea(){return dim1*dim2;}

};

class Traingle:public Shape
{
public:
    Traingle(int _dim1,int _dim2):Shape(_dim1,_dim2){}
    int calcArea()
    {
        return 0.5*dim1*dim2;
    }

};
class Circle:public Shape
{
 public:
    Circle(int _dim1):Shape(_dim1){}
    int calcArea()
    {
        return 22/7*dim1*dim2;
    }
    void print()
    {
        cout<<dim1 <<":"<<dim2<<endl;
    }
    void setDim1(int _dim1){dim1=dim2=_dim1;}
    void setDim2(int _dim2){dim2=dim1=_dim2;}
};
void myfun(Shape* s)
{
    cout<<s->calcArea()<<endl;
}
int sumArea(Shape* arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=(arr[i]->calcArea());
    }
    return sum;
}

int main()
{
    //Shape s;
    //cout<<s.calcArea()<<endl;

    Rect r(3,4);
    cout<<r.calcArea()<<endl;

    Traingle t(4,3);
    cout<<t.calcArea()<<endl;

    Circle c(7);
    float x=c.calcArea();
    cout<<x<<endl;
    c.print();

    Shape *ptr=&c;
    cout<<ptr->calcArea()<<endl;
    //Circle *ptr1=&c;
    //cout<<ptr1->calcArea();

   // s=r;
    //cout<<s.calcArea();

    //c.setDim1(6); //before set in circle give-->6:7
    //c.print();
    //ptr->setDim1(4); //befor virtual 4:7 call shape
    //c.print();

    ptr->setDim1(5);//after virtual and set in circle give 5:5
    c.print();
   cout<<c.calcArea()<<endl;


    Square s(5,5);
    cout<<s.calcArea()<<endl;
    s.print();
    Rect *ptr1=&s;
    cout<<ptr1->calcArea()<<endl;
    ptr1->setDim1(6); //before set in circle give-->6:7
    s.print();
    Square s1(2);
    Rect* ptr2=&s1;
    cout<<ptr2->calcArea()<<endl;
    s1.print();

    myfun(&r);

    Shape* arr[4]={&r,&t,&s1,&c};
    int z=sumArea(arr,4);
   cout<<z<<endl;

    return 0;
}
