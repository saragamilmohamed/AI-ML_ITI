#include <iostream>
#include<string.h>
#include <conio.h>
using namespace std;
class Int
{
    int x;
public:
   Int()
   {
       x=0;
   }
   Int(int _x)
   {
       x=_x;
   }
   void display()
   {
       cout<<x<<endl;
   }
};

int main()
{
    Int n;
    n.display();
    Int n1(3);
    n1.display();
    return 0;
}*/
//=====================================================

/*class tollBoth
{


   int totalCar;
   double totalMoney;

public:
    tollBoth()
    {
        totalMoney=0;
        totalCar=0;
    }
    void payingCar()
    {
        totalCar++;
        totalMoney+=0.50;
    }
    void noPayCar()
    {
        totalCar++;

    }
    void display()
    {
        cout<<totalCar<<endl;
        cout<<totalMoney<<endl;
    }
};
int main()
{
    tollBoth t;
   // t.display();
    char ch;
    while(1)
    {
        ch=_getch();
        if(ch==27)
        {
            t.display();
            break;
        }
        else if(ch=='p'||ch=='P')
        {
            t.payingCar();
        }
        else if(ch=='N'||ch=='n')
        {
            t.noPayCar();
        }
        else
        {
            cout<<"enter valid character";
        }

    }

    return 0;
}

//=====================================================
class time
{
    int hour;
    int minute;
    int second;
public:
    time()
    {
        hour=0;
        minute=0;
        second=0;
    }
    time(int _h,int _m,int _s)
    {
        hour=_h;
        minute=_m;
        second=_s;
    }

    void normalize()
    {
        if(second>=60)
        {
            minute += second/60;
            second = second%60;
        }
        else if(minute>=60)
        {
            hour+=minute/60;
            minute=minute%60;
        }
        else if(hour>=24)
        {
            hour=hour%24;

        }
    }
    time add(time t)
    {
        time t1;
        t1.hour=hour+t.hour;
        t1.minute=minute+t.minute;
        t1.second=second+t.second;
        t1.normalize();
        return t1;
    }
    void display()
    {
        cout<<hour<<":"<<minute<<":"<<second<<endl;
    }
};
int main()
{
    time t(1,60,4);
    time t1(1,5,20);
    time t2=t.add(t1);
    t2.display();
}

//=======================================================
#include <iostream>
#include<string.h>
#include <conio.h>
using namespace std;

class Employee
{
    int num;
    float comp;
public:
    Employee(int _num, float _comp)
    {
        num=_num;
        comp=_comp;
    }
    void display()
    {
        cout<<num<<endl;
        cout<<comp<<endl;
    }
};
int main()
{
    int i=0;
    while(i<3)
    {
    int x;
    float y;
    cin>>x>>y;
    Employee emp1(x,y);
    emp1.display();
    i++;
    }
return 0;
}

//=========================================================
