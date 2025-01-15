#include <iostream>

using namespace std;
class Duration
{
   int hours;
   int minutes;
   int seconds;
public:
    Duration()
    {
        hours=1;
        minutes=10;
        seconds=20;

    }
    Duration(int _hour,int _minute,int _second)
    {
        hours=_hour;
        minutes=_minute;
        seconds=_second;
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
    }
    Duration(int _seconds)
    {
        hours=_seconds/3600;
        minutes=(_seconds%3600)/60;
        seconds=_seconds%60;


    }

    void setHour(int _hours)
    {
        hours=_hours;

    }
    void setMinute(int _minutes)
    {
         minutes=_minutes;
        if (minutes >= 60) {
        hours += minutes / 60;
        minutes %= 60;
        }

    }
    void setSecond(int _seconds)
    {
        seconds=_seconds;
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
            if (minutes >= 60) {
                hours += minutes / 60;
                minutes %= 60;
            }
        }
    }
    int getHour()
    {
        return hours;
    }
    int getMinute()
    {
        return minutes;
    }
    int getSecond()
    {
        return seconds;
    }
    //D1+D2
    Duration operator+(Duration D)
    {
        Duration d;
        d.hours=hours+D.hours;
        d.minutes=minutes+D.minutes;
        d.seconds=seconds+D.seconds;
        return d;
    }
    //D+7800;
    Duration operator+(int s)
    {
        int h=s/3600;
        int m=(s%3600)/60;
        int _s=s%60;
        Duration d;
        d.hours=hours+h;
        d.minutes=minutes+m;
        d.seconds=seconds+_s;
        return d;

    }
    //++
    Duration operator++(int)
    {
        Duration temp=*this;
        hours++;
        minutes++;
        seconds++;
        return temp;
    }
    //--
    Duration operator--()
    {
        hours--;
        minutes--;
        seconds--;
        if(hours<0 )
            hours=0;
        if(minutes<0)
            minutes=0;
        if(seconds<0)
            seconds=0;

        return *this;
    }
    Duration operator >(Duration D)
    {
        if(hours>D.hours)
        {
            return *this;
        }
        else if(hours==D.hours && minutes>D.minutes)
        {
            return *this;
        }
        else if(hours==D.hours && minutes==D.minutes && seconds>D.seconds)
        {
            return *this;
        }
        else
            return D;
    }
    Duration operator <=(Duration D)
    {
        if(hours<=D.hours)
        {
            return *this;
        }
        else if(hours==D.hours && minutes<=D.minutes)
        {
            return *this;
        }
        else if(hours==D.hours && minutes==D.minutes && seconds<=D.seconds)
        {
            return *this;
        }
        else
            return D;
    }
    void print()
    {
        if (getHour())
        cout<<"Hour: "<<getHour()<<" ,Minutes : "<<getMinute()<<" ,Seconds : "<<getSecond()<<endl;
        else
        cout<<"Minutes : "<<getMinute()<<" ,Seconds : "<<getSecond()<<endl;

    }
friend Duration operator+(int s,Duration D);
};
//int +D
Duration operator+(int s,Duration D)
{
        int h=s/3600;
        int m=(s%3600)/60;
        int _s=s%60;
        Duration d;
        d.hours=D.hours+h;
        d.minutes=D.minutes+m;
        d.seconds=D.seconds+_s;
        return d;

}

int main()
{
    Duration D;
    D.print();
    Duration D1(1,20,66);
    D1.print();
    Duration D2(7800);
    D2.print();
    Duration D2_(666);
    D2_.print();
    Duration D3;
    D3.print();
    Duration D4,D5,D6;
    D4=D+D1;
    D4.print();
    D5=D+7800;
    D5.print();
    D6=666+D;
    D6.print();
    Duration D7,D8;
    D7=D++;
    D7.print();
    D8=--D2;
    D8.print();
    Duration D9,D10(1,5,4),D11(1,7,3);
    D9=D10> D11;
    D9.print();
    Duration D12,D13(1,5,4),D14(1,7,3);
    D12=D13<= D14;
    D12.print();

    return 0;
}
