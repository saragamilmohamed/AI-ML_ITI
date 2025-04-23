#include <iostream>
#include <iomanip>
using namespace std;
class angle
{
    int degree;
    float minute;
    char direction;
public:
    void getAngle()
    {
        cout<<"enter degree: ";
        cin>>degree;
        cout<<"enter minutes: ";
        cin>>minute;
        cout<<"enter direction: ";
        cin>>direction;

    }
    angle(int _degree,float _minute, char _direction)
    {
        degree=_degree;
        minute=_minute;
        direction=_direction;
    }
    angle()
    {
        degree=0;
        minute=0.0;
        direction='N';
    }
    void displayAngle()
    {
        cout<<degree<<'\xF8' << fixed << setprecision(1) <<minute<<"' "<<direction<<endl;
    }

};
class ship
{
    angle lat;
    angle lon;
    int shipNumber;
    static int counter;
public:
    static int getCounter(){return counter;}
    ship()
    {
        shipNumber=counter++;
    }
    void getPosition() {

        lat.getAngle();
        lon.getAngle();
    }
    void reportPosition()
    {
        cout << "Ship Number: " << shipNumber << endl;
        cout << "Latitude: ";
        lat.displayAngle();
        cout << "\nLongitude: ";
        lon.displayAngle();
        cout << endl;
    }
};
int ship::counter= 0;
int main()
{
    ship s[3];
    for (int i = 0; i < 3; ++i) {
        s[i].getPosition();
        cout << endl;
    }

    for (int i = 0; i < 3; ++i) {
        s[i].reportPosition();
        cout << endl;
    }
    return 0;
}
