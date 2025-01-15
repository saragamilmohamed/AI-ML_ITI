#include <iostream>

using namespace std;
class Point
{
    int x;
    int y;
public:
    Point(){cout<<"Point Constructor"<<endl;x=y=0;}
    Point(int _x){cout<<"Point Constructor"<<endl;x=y=_x;}
    Point(int _x,int _y){cout<<"Point Constructor"<<endl;x=_x;y=_y;}

    void setX(int _x){x=_x;}
    void setY(int _y){y=_y;}
    int getX(){return x;}
    int getY(){return y;}
    void print(){cout<<"("<<getX()<<","<<getY()<<")"<<endl;}
    ~Point()
    {
        cout<<"Point Destructor"<<endl;
    }

};
class Rect
{
    Point* UL;
    Point* LR;
public:
    Rect()
    {
        UL=new Point(0,0);
        LR=new Point(0,0);
        cout<<"Rectangle Constructor"<<endl;
    }

    Rect(int x,int y ,int _x, int _y)//:UL(x,y),LR(_x,_y)
    {
        UL =new Point(x,y);
        LR=new Point(_x,_y);

    }
   // void setUl(Point _ul){UL=_ul;}
    void setUL(int _x,int _y)
      {
          UL->setX(_x);
          UL->setY(_y);
      }
   // void setLR(Point _ul){LR=_ul;}
    void setLR(int _x,int _y)
      {
          LR->setX(_x);
          LR->setY(_y);
      }


    Point* getUL(){return UL;}
    Point* getLR(){return LR;}

       void print() {
        cout << "Upper Left: ";
        UL->print();
        cout << "Lower Right: ";
        LR->print();
    }

    ~Rect()
    {
        delete UL;
        delete LR;
        cout<<"Rectangle Destructor"<<endl;
    }


};
class Circle
{
    Point* C;
    int radius;

public:
    Circle()
    {

        C=new Point (0,0);
        radius=1;
        cout<<"Circle Constructor"<<endl;
    }
    Circle (int _x,int _y, int _radius)
    {
        cout<<"Circle Constructor"<<endl;
        C= new Point(_x,_y);
        radius=_radius;

    }

    void setC(int x,int y)
    {
        C->setX(x);
        C->setY(y);
    }
    void setRadias(int r)
    {
        radius=r;
    }
    Point* getC(){return C;}
    int getRadias(){return radius;}

    void print()
    {
        cout<<"Center : ";
        C->print();
        cout<<"radius : "<<radius<<endl;
    }
    ~Circle()
    {
        delete C;
        cout<<"Circle Destructor"<<endl;
    }

};

int main()
{
   // Rect r;
   /* Point p1(1,2);
    p1.print();

    Rect r1;
    r1.setUL(2,3);
    r1.setLR(4,6);
    r1.print();

    Rect r2(1,2,3,4);
    r2.print();

    Circle C1(5,5,10);
    C1.print();*/

    Rect r1;
    r1.setUL(2,3);
    r1.setLR(4,6);
    r1.print();


    Circle c1(3,3,5);

    c1.print();
    return 0;
}
