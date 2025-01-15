#include <iostream>
#include<string.h>
#include <conio.h>
using namespace std;
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
