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
        if(direction !='W'||direction !='E'||direction !='S'||direction !='N')
        {
            cout<<"invalid direction,please enter valid direction(W OR E OR S OR N"<<endl;
            cin>>direction;
        }
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
int main()
{
    angle A(34,5.5,'N');
    A.displayAngle();

    angle A2;
    char c;

    do
    {

        A2.getAngle();
        A2.displayAngle();
        cout<<"if you want to enter angle press y if no press another letter"<<endl;
        cin>>c;

    }while(c=='y' || c=='Y');
    return 0;
}
