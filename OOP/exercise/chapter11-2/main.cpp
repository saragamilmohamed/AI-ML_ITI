#include <iostream>

using namespace std;
class Distance
{
    float meter;
public:
    Distance(){meter=0.0;}
    Distance(float _meter){meter=_meter;}
    void setMeter(float _meter){meter=_meter;}
    float getMeter(){return meter;}

    void display(){cout<<"Distance is "<<meter<<" meters"<<endl;}
    friend Distance operator*(float x,Distance& d);
};

Distance operator*(float x,Distance& d)
{
    Distance res;
    res.meter=x*d.meter;
    return res;

}
int main()
{

    Distance d1(3.9);
    Distance d2(2.2);
    Distance d3;
    d3=.5*d1;
    d3.display();
    return 0;
}
